package com.paracamplus.ilp2.ilp2tme5.compiler.normalizer;

import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp2.ilp2tme5.ast.ASTContinue;
import com.paracamplus.ilp2.ilp2tme5.ast.ASTbreak;

public class NormalizationFactory extends com.paracamplus.ilp2.compiler.normalizer.NormalizationFactory
implements INormalizationFactory {

	@Override
	public IASTexpression newBreak() {
		// TODO Auto-generated method stub
		return new ASTbreak();
	}

	@Override
	public IASTexpression newContinue() {
		// TODO Auto-generated method stub
		return new ASTContinue();
	}

}
