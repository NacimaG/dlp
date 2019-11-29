package com.paracamplus.ilp1.ilp1tme1.test;

import org.junit.Test;

import com.paracamplus.ilp1.ilp1tme1.ast.ASTfactory;
import com.paracamplus.ilp1.ilp1tme1.interfaces.IASTfactory;
import com.paracamplus.ilp1.ilp1tme1.interfaces.IASTsequence;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;

import junit.framework.TestCase;

public class GABL extends TestCase{
	protected IASTfactory fact= new ASTfactory();
	
	@Test 
	public void testGABL() throws EvaluationException {
		IASTexpression[] args = {fact.newIntegerConstant("2"),fact.newIntegerConstant("3")};
		IASTsequence seq= fact.newSequence(args);
		assertEquals(seq.getAllButLastInstruction().length,1);	
		
	}
}
