package com.paracamplus.ilp1.ilp1tme1.ast;

import com.paracamplus.ilp1.ilp1tme1.interfaces.IASTsequence;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;

public class ASTsequence extends com.paracamplus.ilp1.ast.ASTsequence implements IASTsequence{

	public ASTsequence(IASTexpression[] expressions) {
		super(expressions);
			}

	@Override
	public IASTexpression[] getAllButLastInstruction() throws EvaluationException {
		IASTexpression[] res= this.expressions;
		IASTexpression [] tmp = new IASTexpression[res.length-1];
		for (int i=0; i<tmp.length-1 ;i++) {
			tmp[i]= res[i];
		}
		System.out.println(":::: "+tmp.length);
		return tmp;
	}
	
	

}
