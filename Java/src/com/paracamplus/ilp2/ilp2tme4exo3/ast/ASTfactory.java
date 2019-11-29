package com.paracamplus.ilp2.ilp2tme4exo3.ast;

import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp2.ilp2tme4exo3.interfaces.IASTfactory;


public class ASTfactory extends com.paracamplus.ilp2.ast.ASTfactory implements IASTfactory {
	
	public IASTexpression newUnless(IASTexpression condition, IASTexpression consequence) {
		return new ASTunless(condition,consequence);
	}

}
