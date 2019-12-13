package com.paracamplus.ilp4.ilp4tme8.compiler;

import java.util.Set;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.interfaces.IASTClocalVariable;
import com.paracamplus.ilp4.compiler.interfaces.IASTCprogram;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASThasProprety;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASTreadProprety;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASTvisitor;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASTwriteProprety;

public class FreeVariableCollector extends com.paracamplus.ilp4.compiler.FreeVariableCollector
implements IASTvisitor<Void, Set<IASTClocalVariable>, CompilationException>{

	public FreeVariableCollector(IASTCprogram program) {
		super(program);
	}

	@Override
	public Void visit(IASTreadProprety iast, Set<IASTClocalVariable> data) throws CompilationException {
		iast.getObject().accept(this, data);
		iast.getProprety().accept(this, data);
		return null;
	}

	@Override
	public Void visit(IASTwriteProprety iast, Set<IASTClocalVariable> data) throws CompilationException {
		iast.getObject().accept(this, data);
		iast.getProprety().accept(this, data);
		iast.getValue().accept(this, data);
		return null;
	}

	@Override
	public Void visit(IASThasProprety iast, Set<IASTClocalVariable> data) throws CompilationException {
		iast.getObject().accept(this, data);
		iast.getProprety().accept(this, data);
		return null;
	}

}
