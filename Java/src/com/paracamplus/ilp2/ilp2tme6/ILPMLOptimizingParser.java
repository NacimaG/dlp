package com.paracamplus.ilp2.ilp2tme6;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.parser.ParseException;
import com.paracamplus.ilp2.interfaces.IASTfactory;
import com.paracamplus.ilp2.interfaces.IASTprogram;
import com.paracamplus.ilp2.parser.ilpml.ILPMLParser;

public class ILPMLOptimizingParser extends ILPMLParser{
	
	CopyTransform<Void> ct ;

	public ILPMLOptimizingParser(IASTfactory factory) {
		super(factory);
		ct =  new CopyTransform<>(factory);
	}
	@Override
    public IASTprogram getProgram() throws ParseException {
		
		try {
			return ct.visit(super.getProgram(), null);
		} catch (CompilationException e) {
			// TODO Auto-generated catch block
			throw new ParseException(e);
		}
		
    }
	

}
