package com.paracamplus.ilp2.ilp2tme3.Primitive;

import java.util.Vector;

import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.primitive.UnaryPrimitive;

public class VectorLength extends UnaryPrimitive {

	public VectorLength() {
		super("vectorLength");
	}

	@Override
	public Object apply(Object arg1) throws EvaluationException {
		if(arg1 instanceof Vector<?>) {
			Vector<?> vec = (Vector<?>) arg1;
			return vec.size();
		}
		throw new EvaluationException("erreur makeVector");
	}

}
