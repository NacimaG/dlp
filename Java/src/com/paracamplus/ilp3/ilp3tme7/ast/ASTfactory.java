package com.paracamplus.ilp3.ilp3tme7.ast;

import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp3.ilp3tme7.interfaces.IASTfactory;

public class ASTfactory extends com.paracamplus.ilp3.ast.ASTfactory implements IASTfactory{

	@Override
	public IASTexpression newCostart(IASTexpression fun, IASTexpression[] args) {
		// TODO Auto-generated method stub
		return new ASTcostart(fun,args);
	}

}
