package com.paracamplus.ilp2.ilp2tme4.AST;

import com.paracamplus.ilp1.interfaces.IASTalternative;
import com.paracamplus.ilp1.interfaces.IASTbinaryOperation;
import com.paracamplus.ilp1.interfaces.IASTblock;
import com.paracamplus.ilp1.interfaces.IASTblock.IASTbinding;
import com.paracamplus.ilp1.interfaces.IASTboolean;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTfloat;
import com.paracamplus.ilp1.interfaces.IASTinteger;
import com.paracamplus.ilp1.interfaces.IASTinvocation;
import com.paracamplus.ilp1.interfaces.IASToperator;
import com.paracamplus.ilp1.interfaces.IASTsequence;
import com.paracamplus.ilp1.interfaces.IASTstring;
import com.paracamplus.ilp1.interfaces.IASTunaryOperation;
import com.paracamplus.ilp1.interfaces.IASTvariable;
import com.paracamplus.ilp2.ast.ASTfunctionDefinition;
import com.paracamplus.ilp2.ilp2tme4.Interface.IASTfactory;
import com.paracamplus.ilp2.ilp2tme4.Interface.IASTunless;
import com.paracamplus.ilp2.interfaces.IASTassignment;
import com.paracamplus.ilp2.interfaces.IASTfunctionDefinition;
import com.paracamplus.ilp2.interfaces.IASTloop;
import com.paracamplus.ilp2.interfaces.IASTprogram;
import com.paracamplus.ilp2.ilp2tme4.Interface.IASTvisitor;

public class ASTtransform implements IASTvisitor<IASTexpression, Void, Exception>{

	IASTfactory f=new ASTfactory(); 
		
	public IASTprogram transform (IASTprogram iast) throws Exception {
		
		IASTfunctionDefinition[] res= 
				new IASTfunctionDefinition[ iast.getFunctionDefinitions().length];
		for(int i=0; i<res.length; i++) {
			IASTfunctionDefinition funcDef = iast.getFunctionDefinitions()[i];			
			
			IASTexpression body = funcDef.getBody().accept(this, null);
			res[i] = new ASTfunctionDefinition(funcDef.getFunctionVariable(),funcDef.getVariables(), body);
				
		}
		
	return f.newProgram(res,iast.getBody().accept(this, null) );
	}
	
	@Override
	public IASTexpression visit(IASTassignment iast, Void data) throws Exception {
		IASTvariable variable = f.newVariable(iast.getVariable().getMangledName());
		IASTexpression value = iast.getExpression().accept(this, data);
		return f.newAssignment(variable, value);
	}

	@Override
	public IASTexpression visit(IASTloop iast, Void data) throws Exception {
		IASTexpression condition= iast.getCondition().accept(this, data);
		IASTexpression body= iast.getBody().accept(this, data);
		return f.newLoop(condition, body);
	}

	 

	@Override
	public IASTexpression visit(IASTbinaryOperation iast, Void data) throws Exception {
		IASToperator operator= iast.getOperator();
		IASTexpression leftOperand= iast.getLeftOperand().accept(this, data);
		IASTexpression rightOperand=iast.getRightOperand().accept(this, data);
		return f.newBinaryOperation(operator, leftOperand, rightOperand);
	}

	@Override
	public IASTexpression visit(IASTblock iast, Void data) throws Exception {
		IASTbinding[] binding= iast.getBindings();
		for (IASTbinding b : binding) {
			b.getInitialisation().accept(this, data);
		}
		IASTexpression body= iast.getBody().accept(this, data);
		return f.newBlock(binding, body);
	}

	@Override
	public IASTexpression visit(IASTboolean iast, Void data) throws Exception {
		String value= iast.getValue().toString();
		return f.newBooleanConstant(value);
	}

	@Override
	public IASTexpression visit(IASTfloat iast, Void data) throws Exception {
		String value= iast.getValue().toString();
		return f.newFloatConstant(value);
	}

	@Override
	public IASTexpression visit(IASTinteger iast, Void data) throws Exception {
		
		return f.newIntegerConstant(iast.getValue().toString());
	}

	@Override
	public IASTexpression visit(IASTinvocation iast, Void data) throws Exception {
		IASTexpression[] arguments= iast.getArguments();
		for (IASTexpression exp : arguments) {
			exp.accept(this, data);
		}
		IASTexpression function= iast.getFunction();
		return f.newInvocation(function, arguments);
	}

	@Override
	public IASTexpression visit(IASTsequence iast, Void data) throws Exception {
		int  length=iast.getExpressions().length;
		IASTexpression [] arguments=new IASTexpression[length];
		for (int i=0;i<length;i++) {
			arguments[i]=iast.getExpressions()[i].accept(this, data);
		}
		return f.newSequence(arguments);
		
		/*
		IASTexpression[] expressions= iast.getExpressions();
		IASTexpression copie[]=new IASTexpression[expressions.length];
        for (int i=0 ; i <copie.length;i++) {
        	copie[i]=expressions[i].accept(this, data);
        }
        	
		return f.newSequence(copie);*/
	
	}

	@Override
	public IASTexpression visit(IASTstring iast, Void data) throws Exception {
		
		return f.newStringConstant(iast.getValue());
	}

	@Override
	public IASTexpression visit(IASTunaryOperation iast, Void data) throws Exception {
		
		return f.newUnaryOperation(iast.getOperator(), iast.getOperand().accept(this, data));
	}

	@Override
	public IASTexpression visit(IASTvariable iast, Void data) throws Exception {
		
		String name= iast.getMangledName();
		return f.newVariable(name);
	}

	@Override
	public IASTexpression visit(IASTunless iast, Void data) throws Exception {
		
		IASTexpression alternant = iast.getConsequence().accept(this, data);
		IASTexpression condition   = iast.getCondition().accept(this, data);
		IASTexpression consequence = f.newBooleanConstant("false").accept(this, data);
		// TODO Auto-generated method stub
		return f.newAlternative(condition, consequence, alternant);
	}

	@Override
	public IASTexpression visit(IASTalternative iast, Void data) throws Exception {
		IASTexpression consequence =iast.getConsequence().accept(this, data);
		IASTexpression condition = iast.getCondition().accept(this, data);
		
		return iast.isTernary() ? 
				f.newAlternative(condition, consequence,iast.getAlternant().accept(this, data)):
					f.newAlternative(condition, consequence,null);
	}
	/*
	@Override
	public IASTexpression visit(IASTalternative iast, Void data) throws Exception {

		
		IASTexpression condition= iast.getCondition().accept(this, data);
		IASTexpression consequence= iast.getConsequence().accept(this, data);
		IASTexpression alternant=iast.getAlternant().accept(this, data);
		return f.newAlternative(condition, consequence, alternant);
	}
*/
	// Par soucis de temps nous

}
