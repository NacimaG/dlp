package com.paracamplus.ilp2.ilp2tme3;

import java.io.Writer;
import java.math.BigDecimal;

import com.paracamplus.ilp1.interpreter.interfaces.IGlobalVariableEnvironment;
import com.paracamplus.ilp1.interpreter.primitive.Newline;
import com.paracamplus.ilp1.interpreter.primitive.Print;
import com.paracamplus.ilp2.ilp2tme3.Primitive.MakeVector;
import com.paracamplus.ilp2.ilp2tme3.Primitive.Sinus;
import com.paracamplus.ilp2.ilp2tme3.Primitive.VectorGet;
import com.paracamplus.ilp2.ilp2tme3.Primitive.VectorLength;

public class GlobalVariableStuff extends com.paracamplus.ilp1.interpreter.GlobalVariableStuff{
	
	public static void fillGlobalVariables (
            IGlobalVariableEnvironment env,
            Writer out ) {
        env.addGlobalVariableValue("pi", new BigDecimal("3.1415926535"));
        env.addGlobalVariableValue(new Print(out));
        env.addGlobalVariableValue(new Newline(out));
        env.addGlobalVariableValue(new Sinus());
        env.addGlobalVariableValue(new MakeVector());
        env.addGlobalVariableValue(new VectorLength());
        env.addGlobalVariableValue(new VectorGet());
        
        
        
    }

}
