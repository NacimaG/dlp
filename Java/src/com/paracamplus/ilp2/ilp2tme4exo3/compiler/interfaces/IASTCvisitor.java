package com.paracamplus.ilp2.ilp2tme4exo3.compiler.interfaces;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp2.ilp2tme4exo3.compiler.Compiler;

public interface IASTCvisitor<Result, Data, Anomaly extends Throwable> 
extends com.paracamplus.ilp2.compiler.interfaces.IASTCvisitor<Result, Data, Anomaly> {
	Result visit(IASTCunless iast, Data data) throws Anomaly;
}
