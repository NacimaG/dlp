package com.paracamplus.ilp4.ilp4tme8.ast;

import com.paracamplus.ilp1.ast.ASTexpression;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTvisitor;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASThasProprety;

public class ASThasProprety extends ASTexpression implements IASThasProprety{
	
	IASTexpression object;
	IASTexpression proprety;

	public ASThasProprety(IASTexpression object,IASTexpression proprety) {
		this.proprety = proprety;
		this.object=object;
	}
	@Override
	public <Result, Data, Anomaly extends Throwable> Result accept(IASTvisitor<Result, Data, Anomaly> visitor,
			Data data) throws Anomaly {
		return ((com.paracamplus.ilp4.ilp4tme8.interfaces.IASTvisitor<Result, Data, Anomaly>)visitor).visit(this, data);
	}

	@Override
	public IASTexpression getObject() {
		return object;
	}

	@Override
	public IASTexpression getProprety() {
		return proprety;
	}

}
