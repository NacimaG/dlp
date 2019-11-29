package com.paracamplus.ilp2.ilp2tme4exo3.compiler;

import java.util.Set;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.interfaces.IASTCglobalVariable;
import com.paracamplus.ilp2.ilp2tme4exo3.compiler.interfaces.IASTCunless;
import com.paracamplus.ilp2.ilp2tme4exo3.compiler.interfaces.IASTCvisitor;

public class GlobalVariableCollector extends com.paracamplus.ilp2.compiler.GlobalVariableCollector
implements IASTCvisitor<Set<IASTCglobalVariable>, Set<IASTCglobalVariable>, CompilationException>{

	@Override
	public Set<IASTCglobalVariable> visit(IASTCunless iast, Set<IASTCglobalVariable> data) throws CompilationException {
		result = iast.getCondition().accept(this, data);
		result = iast.getConsequence().accept(this, data);
		return result;
	}

}
