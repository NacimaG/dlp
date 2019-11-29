package com.paracamplus.ilp2.ilp2tme4.Interface;

import com.paracamplus.ilp1.interfaces.IASTexpression;

public interface IASTfactory extends com.paracamplus.ilp2.interfaces.IASTfactory{

	public IASTexpression newUnless(IASTexpression condition, IASTexpression consequence);
}
