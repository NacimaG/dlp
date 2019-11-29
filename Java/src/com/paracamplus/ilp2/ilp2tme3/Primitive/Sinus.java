package com.paracamplus.ilp2.ilp2tme3.Primitive;

import java.math.BigDecimal;
import java.math.BigInteger;

import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.primitive.UnaryPrimitive;

public class Sinus extends UnaryPrimitive {

	public Sinus() {
		super("sinus");
	}

	@Override
	public Object apply(Object arg1) throws EvaluationException {
		
		if(arg1 instanceof BigDecimal) {
			BigDecimal b=(BigDecimal) arg1;
			return  Math.sin(b.doubleValue());
		}
		if(arg1 instanceof BigInteger) {
			BigInteger b=(BigInteger) arg1;
			return  Math.sin(b.intValue());
		}
		
		throw new EvaluationException("no numeric argument");
	}


	

	
	

}
