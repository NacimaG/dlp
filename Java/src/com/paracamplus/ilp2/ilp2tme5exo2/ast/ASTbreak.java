package com.paracamplus.ilp2.ilp2tme5exo2.ast;

import com.paracamplus.ilp1.ast.ASTexpression;
import com.paracamplus.ilp1.interfaces.IASTvisitor;
import com.paracamplus.ilp2.ilp2tme5exo2.interfaces.IASTbreak;

public class ASTbreak extends ASTexpression implements IASTbreak{
	private final String label;
	
	public ASTbreak(String label) {
		this.label = label;
	}	

	@Override
	public <Result, Data, Anomaly extends Throwable> Result accept(IASTvisitor<Result, Data, Anomaly> visitor,
			Data data) throws Anomaly {
		return ((com.paracamplus.ilp2.ilp2tme5exo2.interfaces.IASTvisitor<Result, Data, Anomaly>)visitor).visit(this, data);
	}

	@Override
	public String getLabel() {
		// TODO Auto-generated method stub
		return label;
	}

}
