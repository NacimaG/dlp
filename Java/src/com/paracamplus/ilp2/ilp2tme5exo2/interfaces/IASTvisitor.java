package com.paracamplus.ilp2.ilp2tme5exo2.interfaces;


public interface IASTvisitor <Result, Data, Anomaly extends Throwable > extends com.paracamplus.ilp2.interfaces.IASTvisitor<Result, Data, Anomaly>{
    Result visit(IASTloop iast, Data data) throws Anomaly;
    Result visit(IASTbreak iast, Data data) throws Anomaly;
    Result visit(IASTcontinue iast, Data data) throws Anomaly;


}
