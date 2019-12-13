package com.paracamplus.ilp4.ilp4tme8.compiler.normalizer;

import com.paracamplus.ilp1.interfaces.IASTexpression;

public interface INormalizationFactory extends com.paracamplus.ilp4.compiler.normalizer.INormalizationFactory{
	IASTexpression newASThasProprety(IASTexpression object, IASTexpression proprety);
	IASTexpression newASTreadProprety(IASTexpression object, IASTexpression proprety);
	IASTexpression newASTwriteProprety(IASTexpression object, IASTexpression proprety, IASTexpression value);

}
