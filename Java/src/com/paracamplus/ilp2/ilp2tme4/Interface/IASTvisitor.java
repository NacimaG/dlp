package com.paracamplus.ilp2.ilp2tme4.Interface;


public interface IASTvisitor<Result, Data, Anomaly extends Throwable> extends 
	com.paracamplus.ilp2.interfaces.IASTvisitor<Result, Data, Exception>{ 
	
	Result visit(IASTunless iast, Data data) throws Anomaly;
	

   
}
