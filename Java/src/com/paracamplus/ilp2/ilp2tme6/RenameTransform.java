package com.paracamplus.ilp2.ilp2tme6;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.normalizer.INormalizationEnvironment;
import com.paracamplus.ilp1.compiler.normalizer.NoSuchLocalVariableException;
import com.paracamplus.ilp1.interfaces.IASTblock;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTvariable;
import com.paracamplus.ilp1.interfaces.IASTblock.IASTbinding;
import com.paracamplus.ilp2.interfaces.IASTassignment;
import com.paracamplus.ilp2.interfaces.IASTfactory;
import com.paracamplus.ilp2.interfaces.IASTfunctionDefinition;
import com.paracamplus.ilp2.interfaces.IASTprogram;

public class RenameTransform extends CopyTransform<INormalizationEnvironment> {
	public static int var = 0;
	public RenameTransform(IASTfactory factory) {
		super(factory);		
	}

	@Override
	public IASTexpression visit(IASTvariable iast, INormalizationEnvironment env) throws CompilationException {
		try {
			IASTexpression ret = env.renaming(iast);
			System.out.println("ret "+ret);
			return ret;
		} catch (NoSuchLocalVariableException e) {
			return iast;
		}
	}

	
	
	@Override
	public IASTexpression visit(IASTblock iast, INormalizationEnvironment env) throws CompilationException {
		IASTbinding[] binding= iast.getBindings();
		IASTbinding[] newBindings = new IASTbinding[binding.length];
		INormalizationEnvironment newEnv = env;
		
		for (int i = 0; i < binding.length; i++) {
			//visit init
			IASTvariable oldv = binding[i].getVariable();
			// Créer variable renommée
			IASTvariable newv = factory.newVariable(oldv.getName() + "_" + var++);
			// enregistrer nouveaux nom dans l'environment
			newEnv = newEnv.extend(oldv, newv);
			// Créer un nouveau binding
			//   /!\ Penser à visiter l'initialisation avec l'ancien environment
			newBindings[i] = factory.newBinding(newv, binding[i].getInitialisation().accept(this, env));
			
		}
		IASTexpression body =  iast.getBody().accept(this, newEnv);
		return factory.newBlock(newBindings, body);
	}

//	@Override
//	public IASTexpression visit(IASTassignment iast, INormalizationEnvironment env)throws CompilationException{
//		INormalizationEnvironment newEnv = env;
//		IASTvariable oldv = iast.getVariable();
//		IASTvariable newv;
//		try {
//			newv= env.renaming(oldv);
//			}catch(NoSuchLocalVariableException e) {
//				newv=factory.newVariable(oldv.getName()+"_"+var++);
//				newEnv=newEnv.extend(oldv, newv);
//				System.out.println("binding :: "+newv);
//			}
//		return factory.newAssignment(newv, iast.getExpression().accept(this, newEnv));
//	}

	@Override
	public IASTprogram visit(IASTprogram iast, INormalizationEnvironment env) throws CompilationException {
		IASTfunctionDefinition[] oldf = iast.getFunctionDefinitions();
		IASTfunctionDefinition[] newf = new IASTfunctionDefinition[oldf.length];	
		INormalizationEnvironment newEnv;
		for (int i = 0; i < oldf.length; i++) {
			// nvl environement pour chaque fonction
			newEnv= env;
			// creation d'un nv rtab de variables qu'on pourrait renommé
			int len = oldf[i].getVariables().length;
			IASTvariable[] newvars = new IASTvariable[len];
			// VARIABLE RENAMING
			for(int j=0;j<oldf[i].getVariables().length;j++) {
				System.out.println("cc");
				IASTvariable oldv=oldf[i].getVariables()[j];
				IASTvariable newv=factory.newVariable(oldv.getName()+"_"+var++);
				
				newvars[j]=newv;
				newEnv=newEnv.extend(oldv, newv);
			}
			
			IASTvariable functionVariable = oldf[i].getFunctionVariable();
			IASTexpression body = oldf[i].getBody().accept(this, newEnv);
			newf[i] = factory.newFunctionDefinition(functionVariable, newvars, body.accept(this, env));
		}
		IASTexpression expression = iast.getBody().accept(this, env);
		System.out.println("cpt :: "+var);
		return factory.newProgram(newf, expression);
	}
	


}