
package com.paracamplus.ilp2.ilp2tme4exo3.interfaces;

import com.paracamplus.ilp1.interfaces.IASTexpression;


public interface IASTunless extends IASTexpression {
	public IASTexpression getCondition();
	public IASTexpression getConsequence();
	
}

