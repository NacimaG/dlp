package com.paracamplus.ilp1.ilp1tme1.ast;

import com.paracamplus.ilp1.ilp1tme1.interfaces.IASTfactory;
import com.paracamplus.ilp1.ilp1tme1.interfaces.IASTsequence;
import com.paracamplus.ilp1.interfaces.IASTexpression;

public class ASTfactory extends com.paracamplus.ilp1.ast.ASTfactory implements IASTfactory{
	
	@Override
	public IASTsequence newSequence(IASTexpression[] asts) {
        return new ASTsequence(asts);
        
    }

}
