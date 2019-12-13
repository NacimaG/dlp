package com.paracamplus.ilp2.ilp2tme6;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.interfaces.IASTalternative;
import com.paracamplus.ilp1.interfaces.IASTbinaryOperation;
import com.paracamplus.ilp1.interfaces.IASTblock;
import com.paracamplus.ilp1.interfaces.IASTblock.IASTbinding;
import com.paracamplus.ilp1.interpreter.EmptyLexicalEnvironment;
import com.paracamplus.ilp1.interpreter.Function;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.interfaces.ILexicalEnvironment;
import com.paracamplus.ilp1.interpreter.interfaces.Invocable;
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
import com.paracamplus.ilp2.interfaces.IASTassignment;
import com.paracamplus.ilp2.interfaces.IASTfactory;
import com.paracamplus.ilp2.interfaces.IASTfunctionDefinition;
import com.paracamplus.ilp2.interfaces.IASTloop;
import com.paracamplus.ilp2.interfaces.IASTprogram;
import com.paracamplus.ilp2.interfaces.IASTvisitor;

public class CopyTransform<Data> implements IASTvisitor<IASTexpression, Data, CompilationException>{

	IASTfactory factory;
	public  CopyTransform(IASTfactory factory) {
		this.factory = factory;
	}
	@Override
	public IASTexpression visit(IASTalternative iast, Data data) throws CompilationException {
		IASTexpression condition = iast.getCondition().accept(this, data);
		
		IASTexpression consequence =  iast.getConsequence().accept(this, data);
		if(iast.isTernary()) {
			IASTexpression alternant = iast.getAlternant().accept(this, data);
			return factory.newAlternative(condition, consequence, alternant);
		}else {
			return factory.newAlternative(condition, consequence, null);
		}
	}

	@Override
	public IASTexpression visit(IASTbinaryOperation iast, Data data) throws CompilationException {
		IASToperator operator = iast.getOperator();
		IASTexpression leftOperand = iast.getLeftOperand().accept(this, data);
		IASTexpression rightOperand = iast.getRightOperand().accept(this, data);
		return factory.newBinaryOperation(operator, leftOperand, rightOperand);
	}

	@Override
	public IASTexpression visit(IASTblock iast, Data data) throws CompilationException {
		IASTbinding[] binding= iast.getBindings();
		IASTexpression body =  iast.getBody().accept(this, data);
		return factory.newBlock(binding, body);
	}

	@Override
	public IASTexpression visit(IASTboolean iast, Data data) throws CompilationException {
		String value = iast.getValue().toString();
		return factory.newBooleanConstant(value);
	}

	@Override
	public IASTexpression visit(IASTfloat iast, Data data) throws CompilationException {
		String value = iast.getValue().toString();
		// TODO Auto-generated method stub
		return factory.newFloatConstant(value);
	}

	@Override
	public IASTexpression visit(IASTinteger iast, Data data) throws CompilationException {
		String value = iast.getValue().toString();
		return factory.newIntegerConstant(value);
	}

	@Override
	public IASTexpression visit(IASTinvocation iast, Data data) throws CompilationException {
		IASTexpression function= iast.getFunction().accept(this, data);
		
		IASTexpression[] arguments= iast.getArguments();
		return factory.newInvocation(function, arguments);
	}

	@Override
	public IASTexpression visit(IASTsequence iast, Data data) throws CompilationException {
		IASTexpression[] asts = iast.getExpressions();
		
		return factory.newSequence(asts);
	}

	@Override
	public IASTexpression visit(IASTstring iast, Data data) throws CompilationException {
		String value = iast.getValue().toString();
		return factory.newStringConstant(value);
	}

	@Override
	public IASTexpression visit(IASTunaryOperation iast, Data data) throws CompilationException {
		IASToperator operator = iast.getOperator();
		IASTexpression operand= iast.getOperand().accept(this, data);
		return factory.newUnaryOperation(operator, operand);
	}

	@Override
	public IASTexpression visit(IASTvariable iast, Data data) throws CompilationException {
		String name= iast.getName();
		return factory.newVariable(name);
	}

	@Override
	public IASTexpression visit(IASTassignment iast, Data data) throws CompilationException {
		IASTvariable variable= iast.getVariable();
		
		IASTexpression value= iast.getExpression().accept(this, data);
		return factory.newAssignment(variable, value);
	}

	@Override
	public IASTexpression visit(IASTloop iast, Data data) throws CompilationException {
		IASTexpression condition = iast.getCondition().accept(this, data);
		IASTexpression body = iast.getBody().accept(this, data);
		return factory.newLoop(condition, body);
	}
	
	  public Invocable visit(IASTfunctionDefinition iast, ILexicalEnvironment lexenv) 
	            throws EvaluationException {
	        Invocable fun = new Function(iast.getVariables(),
	                                     iast.getBody(),
	                                     new EmptyLexicalEnvironment());
	        
	        return fun;
	    }
	
	
	
	public IASTprogram visit(IASTprogram iast, Data data) throws CompilationException {

		IASTfunctionDefinition[] functions = iast.getFunctionDefinitions();
		for (int i = 0; i < functions.length; i++) {
			IASTexpression body = functions[i].getBody().accept(this, data);
			if (body instanceof IASTinvocation) {
				IASTinvocation other = (IASTinvocation) body;
				other.accept(this, data);
			}
			IASTexpression exp = functions[i].getFunctionVariable().accept(this, data);
		}

		IASTexpression expression = iast.getBody().accept(this, data);
		return factory.newProgram(functions, expression);
	}

}
