package com.paracamplus.ilp1.ilp1tme1.interfaces;

import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;

public interface IASTsequence extends com.paracamplus.ilp1.interfaces.IASTsequence{
	IASTexpression[] getAllButLastInstruction() throws EvaluationException;
	
}
