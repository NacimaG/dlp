package com.paracamplus.ilp2.ilp2tme4exo3.ast;


import com.paracamplus.ilp1.ast.ASTexpression;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp2.ilp2tme4.Interface.IASTunless;
import com.paracamplus.ilp2.ilp2tme4.Interface.IASTvisitor;

public class ASTunless extends ASTexpression implements IASTunless {

	private final IASTexpression condition;
	private final IASTexpression consequence;

	public ASTunless(IASTexpression condition, IASTexpression consequence) {

		this.condition = condition;
		this.consequence = consequence;
	}

	public IASTexpression getCondition() {
		return condition;
	}

	public IASTexpression getConsequence() {
		return consequence;
	}

	public <Result, Data, Anomaly extends Throwable> Result accept(
			com.paracamplus.ilp1.interfaces.IASTvisitor<Result, Data, Anomaly> visitor,
			Data data) throws Anomaly {
		
		try {
			
			return ((IASTvisitor <Result, Data, Anomaly>) visitor).visit(this, data);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			return null;
		}
	}


}
