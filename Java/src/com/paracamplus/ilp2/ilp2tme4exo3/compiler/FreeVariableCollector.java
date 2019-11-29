package com.paracamplus.ilp2.ilp2tme4exo3.compiler;

import java.util.Set;
import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.interfaces.IASTClocalVariable;
import com.paracamplus.ilp2.compiler.interfaces.IASTCprogram;
import com.paracamplus.ilp2.ilp2tme4exo3.compiler.interfaces.IASTCunless;
import com.paracamplus.ilp2.ilp2tme4exo3.compiler.interfaces.IASTCvisitor;


public class FreeVariableCollector extends com.paracamplus.ilp2.compiler.FreeVariableCollector
implements IASTCvisitor<Void, Set<IASTClocalVariable>, CompilationException>{

	public FreeVariableCollector(IASTCprogram program) {
		super(program);
		// TODO Auto-generated constructor stub
	}

	@Override
	public Void visit(IASTCunless iast, Set<IASTClocalVariable> data) throws CompilationException {
		iast.getCondition().accept(this, data);
		iast.getConsequence().accept(this, data);
		return null;
	}


}
