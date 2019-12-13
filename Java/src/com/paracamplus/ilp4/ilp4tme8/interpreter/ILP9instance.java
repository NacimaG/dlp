package com.paracamplus.ilp4.ilp4tme8.interpreter;

import java.util.HashMap;
import java.util.Map;

import javax.swing.plaf.synth.SynthSpinnerUI;

import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp4.interpreter.ILP9Instance;
import com.paracamplus.ilp4.interpreter.interfaces.IClass;

public class ILP9instance extends ILP9Instance {
	
	private Map<String, Object> props;
	public ILP9instance(IClass clazz, Object[] fields) throws EvaluationException {
		super(clazz, fields);
		props= new HashMap<>();
	}
	
	public void addProp(String prop, Object value) throws EvaluationException {
		
		try {
			
			super.write(prop, value);
		}catch(EvaluationException e) {
				props.put(prop, value);			
			}
	}

	public Object getProp(String prop) throws EvaluationException {
		try {
		Object val = super.read(prop);
		return val;
		}catch(EvaluationException e) {
			return props.get(prop);
		}
		
		
	}
	
	public boolean contains(String prop) {
		
		return props.containsKey(prop);
	}

}
