package com.paracamplus.ilp2.ilp2tme6;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTinvocation;
import com.paracamplus.ilp1.interfaces.IASTvariable;
import com.paracamplus.ilp2.interfaces.IASTfactory;
import com.paracamplus.ilp2.interfaces.IASTfunctionDefinition;
import com.paracamplus.ilp2.interfaces.IASTprogram;

public class CallAnalysis<Data> extends CopyTransform<Data> {
	Map<String, Set<String>> callGraph;

	public CallAnalysis(IASTfactory factory) {
		super(factory);
		callGraph = new HashMap<>();
	}
	
	boolean isRecursive(IASTvariable var) {
		Object v;
			try {
				v = var.accept(this, null);
				if (v instanceof IASTfunctionDefinition) {
					IASTfunctionDefinition fun = (IASTfunctionDefinition) v;
					String name = fun.getName();
					if(callGraph.get(name).contains(name))
						return true;
				}
			} catch (CompilationException e) {
				e.printStackTrace();
			}
		
		return false;
	}
	public IASTprogram visit(IASTprogram iast, Data data) throws CompilationException{
		for(IASTfunctionDefinition func : iast.getFunctionDefinitions()) {
			Set<String> tmp = new HashSet<String>();

			IASTexpression body = func.getBody().accept(this, data);
			if (body instanceof IASTinvocation) {
				IASTinvocation invoc = (IASTinvocation) body;
				invoc.accept(this, data);
				IASTexpression fun = invoc.getFunction().accept(this, data);
				if (fun instanceof IASTvariable) {
					IASTvariable var = (IASTvariable) fun;
					tmp.add(var.getName());
				}
			}	
			func.getFunctionVariable().accept(this, data);
			func.getBody().accept(this, data);
			callGraph.put(func.getName(), tmp);
		}
		for (String name: callGraph.keySet()){
            String key = name.toString();
            String value = callGraph.get(name).toString();  
            System.out.println(key + " " + value);  
} 
		IASTexpression expression = iast.getBody().accept(this, data);	
		return factory.newProgram(iast.getFunctionDefinitions(), expression);
	}
//	public IASTprogram visit(IASTprogram iast, Data data) throws CompilationException  {
//		//System.out.println("cc fromo callanal");
//		Set<String> tmp = new HashSet<>();
//		IASTfunctionDefinition[] functions = iast.getFunctionDefinitions();
//		for (int i = 0; i < functions.length; i++) {
//			
//			IASTexpression body = functions[i].getBody().accept(this, data);
//			if(body instanceof IASTsequence) {
//				IASTsequence seq = (IASTsequence) body;
//				seq.accept(this, data);
//				IASTexpression [] exps = seq.getExpressions();
//				for (IASTexpression exp : exps) {
//					exp.accept(this, data);
//					if(exp instanceof IASTinvocation) {
//						IASTinvocation voc = (IASTinvocation) exp;
//						voc.accept(this, data);
//						IASTexpression fun = voc.getFunction().accept(this, data);
//						if(fun instanceof ASTvariable) {
//							ASTvariable var = (ASTvariable) fun ;
//							tmp.add(var.getName());
//						}
//					}
//				}
//			}
//			functions[i].getFunctionVariable().accept(this, data);
//			functions[i].getBody().accept(this, data);
//			callGraph.put(functions[i].getName(), tmp);
//			
//			
//	}
//		
//		IASTexpression expression = iast.getBody().accept(this, data);	
//		return factory.newProgram(functions, expression);
//	}



}

