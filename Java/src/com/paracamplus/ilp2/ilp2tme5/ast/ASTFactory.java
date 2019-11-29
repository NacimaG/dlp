package com.paracamplus.ilp2.ilp2tme5.ast;

import com.paracamplus.ilp2.ast.ASTfactory;
import com.paracamplus.ilp2.ilp2tme5.interfaces.IASTFactory;
import com.paracamplus.ilp2.ilp2tme5.interfaces.IASTbreak;
import com.paracamplus.ilp2.ilp2tme5.interfaces.IASTcontinue;

public class ASTFactory extends ASTfactory implements IASTFactory{
	public IASTbreak newBreak() {
	
		return new ASTbreak();
	}

	

	@Override
	public IASTcontinue newContinu() {
		// TODO Auto-generated method stub
		return new ASTContinue();
	}


}
