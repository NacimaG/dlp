
package com.paracamplus.ilp2.ilp2tme4.Interface;

import com.paracamplus.ilp1.interfaces.IASTexpression;


public interface IASTunless extends IASTexpression {
	public IASTexpression getCondition();
	public IASTexpression getConsequence();
	
}

