package com.paracamplus.ilp2.ilp2tme5.compiler;

import java.util.Set;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.interfaces.IASTClocalVariable;
import com.paracamplus.ilp2.compiler.interfaces.IASTCprogram;
import com.paracamplus.ilp2.ilp2tme5.interfaces.IASTbreak;
import com.paracamplus.ilp2.ilp2tme5.interfaces.IASTcontinue;
import com.paracamplus.ilp2.ilp2tme5.interfaces.IASTvisitor;


public class FreeVariableCollector extends com.paracamplus.ilp2.compiler.FreeVariableCollector
implements IASTvisitor<Void, Set<IASTClocalVariable>, CompilationException> {

	public FreeVariableCollector(IASTCprogram program) {
		super(program);
		// TODO Auto-generated constructor stub
	}

	@Override
	public Void visit(IASTcontinue iast, Set<IASTClocalVariable> data) throws CompilationException {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public Void visit(IASTbreak iast, Set<IASTClocalVariable> data) throws CompilationException {
		// TODO Auto-generated method stub
		return null;
	}


}