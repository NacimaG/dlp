package com.paracamplus.ilp3.ilp3tme7.interpreter.primitive;


import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.primitive.Primitive;
import com.paracamplus.ilp3.ilp3tme7.interpreter.CoroutineInstance;

public class Yield extends Primitive{

	public Yield() {
		super("yield");
		// TODO Auto-generated constructor stub
	}

	@Override
	public int getArity() {
		// TODO Auto-generated method stub
		return 0;
	}

	
	public Object apply() throws EvaluationException {
		// TODO Auto-generated method stub
		Thread t=Thread.currentThread();
		CoroutineInstance c = (CoroutineInstance) t;
		 c.yielde();
		return Boolean.FALSE;
		
	}
	
	

}
