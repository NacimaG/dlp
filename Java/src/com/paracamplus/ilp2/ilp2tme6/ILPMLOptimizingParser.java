package com.paracamplus.ilp2.ilp2tme6;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.normalizer.NormalizationEnvironment;
import com.paracamplus.ilp1.parser.ParseException;
import com.paracamplus.ilp2.interfaces.IASTfactory;
import com.paracamplus.ilp2.interfaces.IASTprogram;
import com.paracamplus.ilp2.parser.ilpml.ILPMLParser;

public class ILPMLOptimizingParser extends ILPMLParser{
	CopyTransform<Void> ct ;
	RenameTransform rn ;//= new RenameTransform(factory)

	public ILPMLOptimizingParser(IASTfactory factory) {
		super(factory);
		ct =  new CopyTransform<>(factory);
		rn = new RenameTransform(factory);
	}
	@Override
    public IASTprogram getProgram() throws ParseException {
		try {
			return rn.visit(super.getProgram(), NormalizationEnvironment.EMPTY);
			//return ct.visit(super.getProgram(), null);
		} catch (CompilationException e) {
			// TODO Auto-generated catch block
			throw new ParseException(e);
		}
		
    }
	

}
