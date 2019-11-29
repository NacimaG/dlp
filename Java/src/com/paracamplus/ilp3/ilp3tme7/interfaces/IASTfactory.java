package com.paracamplus.ilp3.ilp3tme7.interfaces;

import com.paracamplus.ilp1.interfaces.IASTexpression;

public interface IASTfactory extends com.paracamplus.ilp3.interfaces.IASTfactory {
	
	public IASTexpression newCostart(IASTexpression fun, IASTexpression[] args) ;

}
