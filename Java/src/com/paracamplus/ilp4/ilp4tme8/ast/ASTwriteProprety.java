package com.paracamplus.ilp4.ilp4tme8.ast;

import com.paracamplus.ilp1.ast.ASTexpression;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTvisitor;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASTwriteProprety;

public class ASTwriteProprety extends ASTexpression implements IASTwriteProprety{
	IASTexpression object;
	IASTexpression proprety ;
	IASTexpression value;
	
	public  ASTwriteProprety(IASTexpression object, IASTexpression proprety ,IASTexpression value) {
		this.object = object;
		this.proprety = proprety;
		this.value = value;
	}

	@Override
	public <Result, Data, Anomaly extends Throwable> Result accept(IASTvisitor<Result, Data, Anomaly> visitor,
			Data data) throws Anomaly {
		return ((com.paracamplus.ilp4.ilp4tme8.interfaces.IASTvisitor<Result, Data, Anomaly>)visitor).visit(this, data);
	}

	public IASTexpression getObject() {
		return object;
	}

	

	public IASTexpression getProprety() {
		return proprety;
	}

	

	public IASTexpression getValue() {
		return value;
	}

}
