package com.paracamplus.ilp1.ilp1tme2.ex2;

import com.paracamplus.ilp1.interfaces.IASTfactory;

import antlr4.ILPMLgrammar1tme2Parser.ConstFalseContext;
import antlr4.ILPMLgrammar1tme2Parser.ConstFloatContext;
import antlr4.ILPMLgrammar1tme2Parser.ConstIntegerContext;
import antlr4.ILPMLgrammar1tme2Parser.ConstStringContext;
import antlr4.ILPMLgrammar1tme2Parser.ConstTrueContext;

public class ILPMLListener extends com.paracamplus.ilp1.ilp1tme2.ex1.ILPMLListener{
	
	private int cptConst=0;
	public ILPMLListener(IASTfactory factory) {
		super(factory);
	}
	@Override 
	public void exitConstFloat(ConstFloatContext ctx) { 
		super.exitConstFloat(ctx);
		cptConst++;
	}

	@Override 
	public void	exitConstInteger(ConstIntegerContext ctx) { 
		super.exitConstInteger(ctx);
		cptConst++;
	}
	
	@Override
	public void exitConstString(ConstStringContext ctx) {
		super.exitConstString(ctx);
		cptConst++;
	}
	public void exitConstTrue(ConstTrueContext ctx) {
		super.exitConstTrue(ctx);
		cptConst++;
	}
	public void exitConstFalse(ConstFalseContext ctx) {
		super.exitConstFalse(ctx);
		cptConst++;
	}
	 public int getCptConst() {
		 return cptConst;
	 }
}
