package com.paracamplus.ilp4.ilp4tme8.compiler.normalizer;

import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp4.ilp4tme8.ast.ASThasProprety;
import com.paracamplus.ilp4.ilp4tme8.ast.ASTreadProprety;
import com.paracamplus.ilp4.ilp4tme8.ast.ASTwriteProprety;

public class NormalizationFactory extends com.paracamplus.ilp4.compiler.normalizer.NormalizationFactory
implements INormalizationFactory{

	@Override
	public IASTexpression newASThasProprety(IASTexpression object, IASTexpression proprety) {
		return new ASThasProprety(object, proprety);
	}

	@Override
	public IASTexpression newASTreadProprety(IASTexpression object, IASTexpression proprety) {
		return new ASTreadProprety(object, proprety);
	}

	@Override
	public IASTexpression newASTwriteProprety(IASTexpression object, IASTexpression proprety, IASTexpression value) {
		return new ASTwriteProprety(object, proprety, value);
	}

}
