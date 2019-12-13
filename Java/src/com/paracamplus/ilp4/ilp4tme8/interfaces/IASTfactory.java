package com.paracamplus.ilp4.ilp4tme8.interfaces;

import com.paracamplus.ilp1.interfaces.IASTexpression;

public interface IASTfactory extends com.paracamplus.ilp4.interfaces.IASTfactory{
	public IASTreadProprety newASTreadProprety(IASTexpression object, IASTexpression proprety);
	public IASTwriteProprety newASTwriteProprety(IASTexpression object, IASTexpression proprety,IASTexpression value);
	public IASThasProprety newASThasProprety(IASTexpression object, IASTexpression proprety);

}
