package com.paracamplus.ilp2.ilp2tme3.Primitive;

import java.math.BigInteger;
import java.util.Vector;

import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.primitive.Primitive;

public class MakeVector extends Primitive{

	public MakeVector() {
		super("makeVector");
		// TODO Auto-generated constructor stub
	}

	@Override
	public int getArity() {
		// TODO Auto-generated method stub
		return 2;
	}
	
	@Override
	public Object apply(Object taille, Object valeur) throws EvaluationException {
	
		if (! (taille  instanceof BigInteger)) {
			throw new EvaluationException("taille non entier");
		}
		
		BigInteger tail = (BigInteger) taille ;
		int t = tail.intValue();
		Vector<Object> vec = new Vector<>(t);
		for(int i=0;i<t;i++) {
			vec.add(valeur);
		}
		return vec;
		

	}
	
}
