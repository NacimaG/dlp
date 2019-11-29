package com.paracamplus.ilp2.ilp2tme4exo3.interpreter;

import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.interfaces.IGlobalVariableEnvironment;
import com.paracamplus.ilp1.interpreter.interfaces.ILexicalEnvironment;
import com.paracamplus.ilp1.interpreter.interfaces.IOperatorEnvironment;
import com.paracamplus.ilp2.ilp2tme4exo3.interfaces.IASTvisitor;
import com.paracamplus.ilp2.interpreter.Interpreter;

public class interpreter extends Interpreter
implements IASTvisitor<Object, ILexicalEnvironment, EvaluationException> {

	public interpreter(IGlobalVariableEnvironment globalVariableEnvironment,
			IOperatorEnvironment operatorEnvironment) {
		super(globalVariableEnvironment, operatorEnvironment);
		// TODO Auto-generated constructor stub
	}

	

	@Override
	public Object visit(com.paracamplus.ilp2.ilp2tme4exo3.interfaces.IASTunless iast, ILexicalEnvironment data) throws EvaluationException {
		Object cond = iast.getCondition().accept(this, data);
		
		 if ( cond != null && cond instanceof Boolean ) {
	            Boolean b = (Boolean) cond;
	            if ( b.booleanValue() ) 
	                return iast.getConsequence().accept(this, data);
	            else 
	            	return Boolean.FALSE;
		 }
		return Boolean.FALSE;
	}
	



	
	

}
