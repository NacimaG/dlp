package com.paracamplus.ilp2.ilp2tme5exo2.ast;

import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp2.ilp2tme5exo2.interfaces.IASTfactory;

public class ASTfactory extends com.paracamplus.ilp2.ast.ASTfactory
implements IASTfactory{

	@Override
	public IASTexpression newBreak(String label) {
		return new ASTbreak(label);
	}

	@Override
	public IASTexpression newBContinue(String label) {
		return new ASTcontinue(label);
	}

	@Override
	public IASTexpression newLoop(String label, IASTexpression condition, IASTexpression body) {
		// TODO Auto-generated method stub
		return new ASTloop(label, condition, body);
	}

}
