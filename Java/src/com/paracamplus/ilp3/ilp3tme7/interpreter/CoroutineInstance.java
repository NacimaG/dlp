package com.paracamplus.ilp3.ilp3tme7.interpreter;

import java.util.concurrent.Semaphore;

import com.paracamplus.ilp1.ast.ASTinvocation;
import com.paracamplus.ilp1.interfaces.IASTinvocation;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.interfaces.Invocable;
import com.paracamplus.ilp3.ilp3tme7.interfaces.IASTcostart;

public class CoroutineInstance extends Thread{
	

	boolean end = false;
	private Semaphore res = new Semaphore(0);
	private Semaphore sem = new Semaphore(0);
	
	private Interpreter interpreter;
	private Invocable function;
	private Object [] args;	
	
	public CoroutineInstance(Invocable function,Object[] args, Interpreter interpreter) {
		this.function = function;
		this.args = args;
		this.interpreter= interpreter;
		start();
	}
	
	@Override
	public void run() {
		res.acquireUninterruptibly();
		try {
			function.apply(interpreter, args);
			
		} catch (EvaluationException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		sem.release();
		end=true;
		
	}
	
	public void resumer() {
		
		
		if(!end) {
		res.release();
		try {
			sem.acquire();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		}
		else {
		}
		
	}
	public void yielde() {
		
		sem.release();
		try {
			
			res.acquire();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	
	
}
