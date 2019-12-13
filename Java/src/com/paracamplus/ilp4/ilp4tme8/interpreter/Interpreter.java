package com.paracamplus.ilp4.ilp4tme8.interpreter;

import java.util.List;
import java.util.Vector;

import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.interfaces.IGlobalVariableEnvironment;
import com.paracamplus.ilp1.interpreter.interfaces.ILexicalEnvironment;
import com.paracamplus.ilp1.interpreter.interfaces.IOperatorEnvironment;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASThasProprety;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASTreadProprety;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASTvisitor;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASTwriteProprety;
import com.paracamplus.ilp4.interfaces.IASTinstantiation;
import com.paracamplus.ilp4.interpreter.interfaces.IClass;
import com.paracamplus.ilp4.interpreter.interfaces.IClassEnvironment;

public class Interpreter extends com.paracamplus.ilp4.interpreter.Interpreter
implements IASTvisitor<Object, ILexicalEnvironment, EvaluationException>{

	public Interpreter(IGlobalVariableEnvironment globalVariableEnvironment, IOperatorEnvironment operatorEnvironment,
			IClassEnvironment classEnvironment) {
		super(globalVariableEnvironment, operatorEnvironment, classEnvironment);
	}

	@Override
	public Object visit(IASTreadProprety iast, ILexicalEnvironment data) throws EvaluationException {
		Object instance = iast.getObject().accept(this, data);
		if(! (instance instanceof ILP9instance)) {
			 throw new EvaluationException("erreur not instance of ILP9instance");
		}

		ILP9instance ins = (ILP9instance) instance;
		
		Object prop = iast.getProprety().accept(this, data);
		Object ret = ins.getProp((String)prop);
		if(ret != null)
			return ret;
		throw new EvaluationException("error");
	}

	@Override
	public Object visit(IASTwriteProprety iast, ILexicalEnvironment data) throws EvaluationException {
		
		Object prop= iast.getProprety().accept(this, data);
		if (! (prop instanceof String)) {
			throw new EvaluationException("proprety not string");
		}
		Object instance =  iast.getObject().accept(this, data);
		 if(! (instance instanceof ILP9instance ) ) {
			 throw new EvaluationException("erreur not instance object");
		 }
		 
		  ILP9instance ins = (ILP9instance) instance;

		  Object oldValue = ins.getProp((String)prop);
		  if(oldValue == null) {
			  ins.addProp((String)prop,iast.getValue().accept(this, data));
			  return Boolean.FALSE;
		  }
		  return oldValue;
		  }

	@Override
	public Object visit(IASThasProprety iast, ILexicalEnvironment data) throws EvaluationException {

		Object instance = iast.getObject().accept(this, data);
		if(! (instance instanceof ILP9instance)) {
			 throw new EvaluationException("erreur");
		}
		ILP9instance ins = (ILP9instance) instance;
		Object prop = iast.getProprety().accept(this, data);
		
		return ins.contains((String)prop);
	}
	  @Override
		public Object visit(IASTinstantiation iast, ILexicalEnvironment lexenv) 
	            throws EvaluationException {
	        IClass clazz = getClassEnvironment().getILP9Class(iast.getClassName());
	        List<Object> args = new Vector<Object>();
	        for ( IASTexpression arg : iast.getArguments() ) {
	            Object value = arg.accept(this, lexenv);
	            args.add(value);
	        }
	        return new ILP9instance(clazz, args.toArray());
	    }  
	

}
