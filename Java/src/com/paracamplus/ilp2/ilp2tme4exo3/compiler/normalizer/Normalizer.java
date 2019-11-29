package com.paracamplus.ilp2.ilp2tme4exo3.compiler.normalizer;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.normalizer.INormalizationEnvironment;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp2.ilp2tme4exo3.compiler.normalizer.INormalizationFactory;
import com.paracamplus.ilp2.ilp2tme4exo3.interfaces.IASTunless;
import com.paracamplus.ilp2.ilp2tme4exo3.interfaces.IASTvisitor;

public class Normalizer extends com.paracamplus.ilp2.compiler.normalizer.Normalizer
	implements IASTvisitor<IASTexpression, INormalizationEnvironment, CompilationException>{

	public Normalizer(INormalizationFactory factory) {
		super(factory);
		// TODO Auto-generated constructor stub
	}

	@Override
	public IASTexpression visit(IASTunless iast, INormalizationEnvironment data) {
		// TODO Auto-generated method stub
		return ((INormalizationFactory) factory).newUnless(iast.getCondition(),iast.getConsequence());
	}

}
