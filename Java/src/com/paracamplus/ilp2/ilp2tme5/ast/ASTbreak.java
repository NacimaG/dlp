package com.paracamplus.ilp2.ilp2tme5.ast;

import com.paracamplus.ilp1.ast.ASTexpression;

import com.paracamplus.ilp1.interfaces.IASTvisitor;
import com.paracamplus.ilp2.ilp2tme5.interfaces.IASTbreak;

public class ASTbreak extends ASTexpression implements IASTbreak {

	@Override
	public <Result, Data, Anomaly extends Throwable> Result accept(IASTvisitor<Result, Data, Anomaly> visitor,
			Data data) throws Anomaly {
		// TODO Auto-generated method stub
		return ((com.paracamplus.ilp2.ilp2tme5.interfaces.IASTvisitor<Result, Data, Anomaly>) visitor).visit(this, data);
	}

	

}
