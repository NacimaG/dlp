package com.paracamplus.ilp4.ilp4tme8.ast;

import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASTfactory;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASThasProprety;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASTreadProprety;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASTwriteProprety;

public class ASTfactory extends com.paracamplus.ilp4.ast.ASTfactory implements IASTfactory{

	@Override
	public IASTreadProprety newASTreadProprety(IASTexpression object, IASTexpression proprety) {
		return new ASTreadProprety(object, proprety);
	}

	@Override
	public IASTwriteProprety newASTwriteProprety(IASTexpression object, IASTexpression proprety, IASTexpression value) {
		return new ASTwriteProprety(object, proprety, value);
	}

	@Override
	public IASThasProprety newASThasProprety(IASTexpression object, IASTexpression proprety) {
		return new ASThasProprety(object, proprety);
	}
	
}
