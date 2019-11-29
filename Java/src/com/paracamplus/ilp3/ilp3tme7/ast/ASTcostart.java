package com.paracamplus.ilp3.ilp3tme7.ast;

import com.paracamplus.ilp1.ast.ASTexpression;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTvisitor;
import com.paracamplus.ilp3.ilp3tme7.interfaces.IASTcostart;

public class ASTcostart extends ASTexpression implements IASTcostart{
	
	private IASTexpression fun;
	private IASTexpression[] args;
	
	public ASTcostart(IASTexpression fun,IASTexpression[] args) {
		 this.fun=fun;
		 this.args= args;
		
	}
	
	@Override
	public <Result, Data, Anomaly extends Throwable> Result accept(IASTvisitor<Result, Data, Anomaly> visitor,
			Data data) throws Anomaly {
		// TODO Auto-generated method stub
		return ((com.paracamplus.ilp3.ilp3tme7.interfaces.IASTvisitor<Result, Data, Anomaly>)visitor).visit(this,data);
	}

	@Override
	public IASTexpression getFunction() {
		// TODO Auto-generated method stub
		return fun;
	}

	@Override
	public IASTexpression[] getArguments() {
		// TODO Auto-generated method stub
		return args;
	}

}
