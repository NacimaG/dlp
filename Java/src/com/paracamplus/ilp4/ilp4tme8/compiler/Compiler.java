package com.paracamplus.ilp4.ilp4tme8.compiler;

import java.io.BufferedWriter;
import java.io.IOException;
import java.io.StringWriter;
import java.util.Set;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.NoDestination;
import com.paracamplus.ilp1.compiler.Compiler.Context;
import com.paracamplus.ilp1.compiler.interfaces.IASTCglobalVariable;
import com.paracamplus.ilp1.compiler.interfaces.IGlobalVariableEnvironment;
import com.paracamplus.ilp1.compiler.interfaces.IOperatorEnvironment;
import com.paracamplus.ilp4.compiler.FreeVariableCollector;
import com.paracamplus.ilp4.compiler.GlobalVariableCollector;
import com.paracamplus.ilp4.compiler.interfaces.IASTCclassDefinition;
import com.paracamplus.ilp4.compiler.interfaces.IASTCprogram;
import com.paracamplus.ilp4.ilp4tme8.compiler.normalizer.INormalizationFactory;
import com.paracamplus.ilp4.ilp4tme8.compiler.normalizer.NormalizationFactory;
import com.paracamplus.ilp4.ilp4tme8.compiler.normalizer.Normalizer;
import com.paracamplus.ilp4.interfaces.IASTprogram;

public class Compiler extends com.paracamplus.ilp4.compiler.Compiler {

	public Compiler(IOperatorEnvironment ioe, IGlobalVariableEnvironment igve) {
		super(ioe, igve);
		// TODO Auto-generated constructor stub
	}

	public IASTCprogram normalize(IASTprogram program, IASTCclassDefinition objectClass) throws CompilationException {
		INormalizationFactory nf = new NormalizationFactory();
		Normalizer normalizer = new Normalizer(nf, objectClass);
		IASTCprogram newprogram = normalizer.transform(program);
		return newprogram;
	}
	
	public String compile(IASTprogram program, IASTCclassDefinition objectClass) throws CompilationException {

		IASTCprogram newprogram = normalize(program, objectClass);
		newprogram = (IASTCprogram) optimizer.transform(newprogram);

		GlobalVariableCollector gvc = new GlobalVariableCollector();
		Set<IASTCglobalVariable> gvs = gvc.analyze(newprogram);
		newprogram.setGlobalVariables(gvs);

		FreeVariableCollector fvc = new FreeVariableCollector(newprogram);
		newprogram = fvc.analyze();

		Context context = new Context(NoDestination.NO_DESTINATION);
		StringWriter sw = new StringWriter();
		try {
			out = new BufferedWriter(sw);
			visit(newprogram, context);
			out.flush();
		} catch (IOException exc) {
			throw new CompilationException(exc);
		}
		return sw.toString();
	}
    

}
