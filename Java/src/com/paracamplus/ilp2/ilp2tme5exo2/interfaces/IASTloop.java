package com.paracamplus.ilp2.ilp2tme5exo2.interfaces;

import com.paracamplus.ilp1.interfaces.IASTexpression;

public interface IASTloop extends IASTexpression{
	IASTexpression getCondition();
	IASTexpression getBody();
	String getLabel();
}
