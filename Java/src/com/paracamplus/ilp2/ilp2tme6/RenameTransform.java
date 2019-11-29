package com.paracamplus.ilp2.ilp2tme6;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.normalizer.INormalizationEnvironment;
import com.paracamplus.ilp1.compiler.normalizer.NoSuchLocalVariableException;
import com.paracamplus.ilp1.interfaces.IASTblock;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTvariable;
import com.paracamplus.ilp1.interfaces.IASTblock.IASTbinding;
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
			return env.renaming(iast);
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
	
	
	
	
	
	public IASTprogram visit(IASTprogram iast, INormalizationEnvironment env) throws CompilationException {

		IASTfunctionDefinition[] oldf = iast.getFunctionDefinitions();
		IASTfunctionDefinition[] newf = new IASTfunctionDefinition[oldf.length];	
		
		
		for (int i = 0; i < oldf.length; i++) {
			INormalizationEnvironment newEnv = env;
			
			IASTvariable[] newvars = new IASTvariable[oldf[i].getVariables().length];
			
			
			for (int j = 0; i < oldf[j].getVariables().length - 1; j++) {
				
				IASTvariable oldv = oldf[i].getVariables()[j];
				IASTvariable newv = factory.newVariable(oldv.getName() + "_" + var++);

				newEnv = newEnv.extend(oldv, newv);
				newvars[j] = newv ;
						
			
			}
						

			IASTvariable functionVariable = oldf[i].getFunctionVariable();
			
			IASTexpression body = oldf[i].getBody().accept(this, newEnv);
			
		newf[i] = factory.newFunctionDefinition(functionVariable, newvars, body);
			
			oldf[i].getBody().accept(this, newEnv);
			
		}
		

		IASTexpression expression = iast.getBody().accept(this, env);
		return factory.newProgram(newf, expression);
	}
	
	
	
	
	
	
	
}