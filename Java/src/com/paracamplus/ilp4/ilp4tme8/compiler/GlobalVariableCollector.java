package com.paracamplus.ilp4.ilp4tme8.compiler;

import java.util.Set;

import javax.management.RuntimeErrorException;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.interfaces.IASTCglobalVariable;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASThasProprety;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASTreadProprety;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASTvisitor;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASTwriteProprety;

public class GlobalVariableCollector extends com.paracamplus.ilp4.compiler.GlobalVariableCollector
implements IASTvisitor<Set<IASTCglobalVariable>, 
						Set<IASTCglobalVariable>, 
						CompilationException> {

	@Override
	public Set<IASTCglobalVariable> visit(IASTreadProprety iast, Set<IASTCglobalVariable> data)
			throws CompilationException {
		if(iast instanceof IASTreadProprety)
			return visit((IASTreadProprety)iast,data);
		else
			throw new RuntimeException("ERROR read proprety");
	}
		

	@Override
	public Set<IASTCglobalVariable> visit(IASTwriteProprety iast, Set<IASTCglobalVariable> data)
			throws CompilationException {
		if(iast instanceof IASTwriteProprety)
			return visit((IASTwriteProprety)iast,data);
		else
			throw new RuntimeException("ERROR write proprety");
	}

	@Override
	public Set<IASTCglobalVariable> visit(IASThasProprety iast, Set<IASTCglobalVariable> data)
			throws CompilationException {
		if(iast instanceof IASThasProprety)
			return visit((IASThasProprety)iast,data);
		else
			throw new RuntimeException("ERROR has proprety");
	}

}
