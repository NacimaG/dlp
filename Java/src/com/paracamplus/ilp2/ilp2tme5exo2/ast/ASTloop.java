package com.paracamplus.ilp2.ilp2tme5exo2.ast;

import com.paracamplus.ilp1.ast.ASTexpression;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTvisitor;
import com.paracamplus.ilp2.ilp2tme5exo2.interfaces.IASTloop;

public class ASTloop extends ASTexpression implements IASTloop{
	private final IASTexpression condition;
	private final IASTexpression body;
	private final String label;

	public ASTloop(String label, IASTexpression condition, IASTexpression body) {
		this.condition = condition;
		this.body = body;
		this.label = label;
	}


	@Override
	public <Result, Data, Anomaly extends Throwable> Result accept(IASTvisitor<Result, Data, Anomaly> visitor,
			Data data) throws Anomaly {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public IASTexpression getCondition() {
		// TODO Auto-generated method stub
		return condition;
	}

	@Override
	public IASTexpression getBody() {
		// TODO Auto-generated method stub
		return body;
	}

	@Override
	public String getLabel() {
		// TODO Auto-generated method stub
		return label;
	}

}
