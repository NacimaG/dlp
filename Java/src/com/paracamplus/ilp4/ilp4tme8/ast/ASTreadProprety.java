package com.paracamplus.ilp4.ilp4tme8.ast;

import com.paracamplus.ilp1.ast.ASTexpression;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTvisitor;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASTreadProprety;

public class ASTreadProprety extends ASTexpression implements IASTreadProprety{
	IASTexpression object;
	IASTexpression proprety;
	
	public ASTreadProprety(IASTexpression object, IASTexpression proprety) {
		this.object = object;
		this.proprety=proprety;
	}

	@Override
	public <Result, Data, Anomaly extends Throwable> Result accept(IASTvisitor<Result, Data, Anomaly> visitor,
			Data data) throws Anomaly {
		// TODO Auto-generated method stub
		return ((com.paracamplus.ilp4.ilp4tme8.interfaces.IASTvisitor<Result, Data, Anomaly>)visitor).visit(this, data);
	}

	public IASTexpression getObject() {
		return object;
	}

	

	public IASTexpression getProprety() {
		return proprety;
	}


}
