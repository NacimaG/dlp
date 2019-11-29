package com.paracamplus.ilp2.ilp2tme4exo3.compiler.normalizer;

import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp2.ilp2tme4exo3.ast.ASTunless;

public class NormalizationFactory extends com.paracamplus.ilp2.compiler.normalizer.NormalizationFactory
implements INormalizationFactory{

	@Override
	public IASTexpression newUnless(IASTexpression condition, IASTexpression consequence) {
		return new ASTunless(condition, consequence);
	}

}
