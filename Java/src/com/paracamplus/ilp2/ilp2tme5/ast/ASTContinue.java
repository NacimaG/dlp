package com.paracamplus.ilp2.ilp2tme5.ast;

import com.paracamplus.ilp1.ast.ASTexpression;
import com.paracamplus.ilp1.interfaces.IASTvisitor;
import com.paracamplus.ilp2.ilp2tme5.interfaces.IASTcontinue;

public class ASTContinue extends ASTexpression implements IASTcontinue{

	@Override
	public <Result, Data, Anomaly extends Throwable> Result accept(IASTvisitor<Result, Data, Anomaly> visitor,
			Data data) throws Anomaly {
		
		return ((com.paracamplus.ilp2.ilp2tme5.interfaces.IASTvisitor<Result, Data, Anomaly>) visitor).visit(this, data);
	}

}
