package com.paracamplus.ilp1.ilp1tme1.interfaces;

import com.paracamplus.ilp1.interfaces.IASTexpression;

public interface IASTfactory extends com.paracamplus.ilp1.interfaces.IASTfactory{
    IASTsequence newSequence(IASTexpression[] asts);
}
