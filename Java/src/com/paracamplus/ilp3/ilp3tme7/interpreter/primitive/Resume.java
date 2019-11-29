package com.paracamplus.ilp3.ilp3tme7.interpreter.primitive;

import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.primitive.UnaryPrimitive;
import com.paracamplus.ilp3.ilp3tme7.interpreter.CoroutineInstance;

public class Resume extends UnaryPrimitive{

	public Resume() {
		super("resume");
		
		// TODO Auto-generated constructor stub
	}

	@Override
	public Object apply(Object arg) throws EvaluationException {
		
		if(arg==null)
			System.out.println("nulll");
		if (arg instanceof CoroutineInstance) {
			CoroutineInstance c=(CoroutineInstance) arg;
		    c.resumer();
		    
		}
		return Boolean.FALSE;
	}

}
