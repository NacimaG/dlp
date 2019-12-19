package com.paracamplus.ilp4.ilp4tme9.compiler;

import com.paracamplus.ilp1.compiler.AssignDestination;
import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.interfaces.IGlobalVariableEnvironment;
import com.paracamplus.ilp1.compiler.interfaces.IOperatorEnvironment;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTvariable;
import com.paracamplus.ilp1.interfaces.Inamed;
import com.paracamplus.ilp4.interfaces.IASTsend;

public class Compiler extends com.paracamplus.ilp4.compiler.Compiler{

	public Compiler(IOperatorEnvironment ioe, IGlobalVariableEnvironment igve) {
		super(ioe, igve);
		// TODO Auto-generated constructor stub
	}
	 @Override
		public Void visit(IASTsend iast, Context context)
	            throws CompilationException {
	        emit("{ \n");
	        IASTvariable tmpMethod = context.newTemporaryVariable();
	        emit("  ILP_general_function " + tmpMethod.getMangledName() + "; \n");
	        IASTvariable tmpReceiver = context.newTemporaryVariable();
	        emit("  ILP_Object " + tmpReceiver.getMangledName() + "; \n");
	        Context c = context.redirect(new AssignDestination(tmpReceiver));

	        IASTexpression[] arguments = iast.getArguments();
	        IASTvariable[] tmps = new IASTvariable[arguments.length];
	        for ( int i=0 ; i<arguments.length ; i++ ) {
	            IASTvariable tmp = context.newTemporaryVariable();
	            emit("  ILP_Object " + tmp.getMangledName() + "; \n");
	            tmps[i] = tmp;
	        }
	        
	        iast.getReceiver().accept(this, c);
	        for ( int i=0 ; i<arguments.length ; i++ ) {
	            IASTexpression expression = arguments[i];
	            IASTvariable tmp = tmps[i];
	            Context c2 = context.redirect(new AssignDestination(tmp));
	            expression.accept(this, c2);
	        }

	        emit(tmpMethod.getMangledName());
	        emit(" = ILP_find_method_global_cache(");
	        emit(tmpReceiver.getMangledName());
	        emit(", &ILP_object_");
	        emit(Inamed.computeMangledName(iast.getMethodName()));
	        emit("_method, ");
	        emit(1 + arguments.length);
	        emit(");\n");

	        emit(context.destination.compile());
	        emit(tmpMethod.getName());
	        emit("(NULL, ");
	        emit(tmpReceiver.getMangledName());
	        for ( int i = 0 ; i<arguments.length ; i++ ) {
	          emit(", ");
	          emit(tmps[i].getMangledName());
	        }
	        emit(");\n}\n");
	        return null;
	    }

}
