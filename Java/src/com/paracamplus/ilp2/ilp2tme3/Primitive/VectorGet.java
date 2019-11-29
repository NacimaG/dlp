package com.paracamplus.ilp2.ilp2tme3.Primitive;

import java.math.BigInteger;
import java.util.Vector;

import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.primitive.Primitive;

public class VectorGet extends Primitive{

	public VectorGet() {
		super("vectorGet");
		// TODO Auto-generated constructor stub
	}

	@Override
	public int getArity() {
		// TODO Auto-generated method stub
		return 2;
	}
	
	@Override
	public Object apply(Object vec,Object ind) throws EvaluationException {
		if(!(vec instanceof Vector<?>)) {
			throw new EvaluationException("erreur makeVector");
			
		}
		if(!(ind instanceof BigInteger)) {
			throw new EvaluationException("indice doit etre un entier");
		}
		Vector<Object> v = (Vector<Object>) vec;
		BigInteger i= (BigInteger) ind;
		
		if(v.size() <= i.intValue()) {
			throw new EvaluationException("indice doit etre inferiure a la capacite du vecteur");
		}
		//System.out.print(v.get(i.intValue()));
		return v.get(i.intValue());
	}

}
