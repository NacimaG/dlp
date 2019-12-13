package com.paracamplus.ilp2.ilp2tme6.parser;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.parser.ParseException;
import com.paracamplus.ilp2.ilp2tme6.CallAnalysis;
import com.paracamplus.ilp2.interfaces.IASTfactory;
import com.paracamplus.ilp2.interfaces.IASTprogram;

public class ILPMLParser extends com.paracamplus.ilp2.parser.ilpml.ILPMLParser {

	CallAnalysis<Void> ca ;

	public ILPMLParser(IASTfactory factory) {
		super(factory);
		ca =  new CallAnalysis<>(factory);
	}
	@Override
    public IASTprogram getProgram() throws ParseException {
		
		
			try {
				return ca.visit(super.getProgram(), null);
			} catch (CompilationException e) {
				// TODO Auto-generated catch block
				throw new ParseException(e);
			}
	
    
	}
}
