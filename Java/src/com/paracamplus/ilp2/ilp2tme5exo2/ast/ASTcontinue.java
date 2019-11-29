package com.paracamplus.ilp2.ilp2tme5exo2.ast;

import com.paracamplus.ilp1.ast.ASTexpression;
import com.paracamplus.ilp1.interfaces.IASTvisitor;
import com.paracamplus.ilp2.ilp2tme5exo2.interfaces.IASTcontinue;

public class ASTcontinue extends ASTexpression implements IASTcontinue{
	
	private final String label;
	
	public ASTcontinue(String label) {
		this.label = label;
	}

	@Override
	public <Result, Data, Anomaly extends Throwable> Result accept(IASTvisitor<Result, Data, Anomaly> visitor,
			Data data) throws Anomaly {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public String getLabel() {
		return label;
	}

}
