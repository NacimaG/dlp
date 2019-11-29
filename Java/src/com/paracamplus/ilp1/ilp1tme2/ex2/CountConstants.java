package com.paracamplus.ilp1.ilp1tme2.ex2;

import com.paracamplus.ilp1.interfaces.IASTalternative;
import com.paracamplus.ilp1.interfaces.IASTbinaryOperation;
import com.paracamplus.ilp1.interfaces.IASTblock;
import com.paracamplus.ilp1.interfaces.IASTblock.IASTbinding;
import com.paracamplus.ilp1.interfaces.IASTboolean;
import com.paracamplus.ilp1.interfaces.IASTexpression;
import com.paracamplus.ilp1.interfaces.IASTfloat;
import com.paracamplus.ilp1.interfaces.IASTinteger;
import com.paracamplus.ilp1.interfaces.IASTinvocation;
import com.paracamplus.ilp1.interfaces.IASTsequence;
import com.paracamplus.ilp1.interfaces.IASTstring;
import com.paracamplus.ilp1.interfaces.IASTunaryOperation;
import com.paracamplus.ilp1.interfaces.IASTvariable;
import com.paracamplus.ilp1.interfaces.IASTvisitor;


public class CountConstants implements IASTvisitor<Integer, Void, Throwable> {

	@Override
	public Integer visit(IASTalternative iast, Void data) throws Throwable {
		int cpt=0;
		if(iast.isTernary()) {
			cpt=iast.getAlternant().accept(this, data);
		}
		return cpt+iast.getCondition().accept(this, data)+iast.getConsequence().accept(this, data);
	}

	@Override
	public Integer visit(IASTbinaryOperation iast, Void data) throws Throwable {
		return iast.getLeftOperand().accept(this, data)+iast.getRightOperand().accept(this, data);
	}
	@Override
	public Integer visit(IASTblock iast, Void data) throws Throwable {
		IASTexpression body = iast.getBody();
		IASTbinding[] bindings = iast.getBindings();
		int cpt=0;
		
		for (IASTbinding b : bindings) {
			cpt+= b.getInitialisation().accept(this, data);
		}
		cpt+= body.accept(this, data);
		
		return cpt;
	}

	@Override
	public Integer visit(IASTboolean iast, Void data) throws Throwable {
		return 1;
	}

	@Override
	public Integer visit(IASTfloat iast, Void data) throws Throwable {
		return 1;
	}

	@Override
	public Integer visit(IASTinteger iast, Void data) throws Throwable {
		
		return 1;
	}

	@Override
	public Integer visit(IASTinvocation iast, Void data) throws Throwable {
		IASTexpression[] e= iast.getArguments();
		int cpt=0;
		
		for(IASTexpression arg : e)
			cpt+=arg.accept(this, data);
		return cpt;
	}

	@Override
	public Integer visit(IASTsequence iast, Void data) throws Throwable {
		IASTexpression[] e= iast.getExpressions();
		int cpt=0;
		
		for(IASTexpression exp : e)
			cpt+=exp.accept(this, data);
		return cpt;
	}

	@Override
	public Integer visit(IASTstring iast, Void data) throws Throwable {
		return 1;
	}

	@Override
	public Integer visit(IASTunaryOperation iast, Void data) throws Throwable {
		return iast.getOperand().accept(this, data);
	}

	@Override
	public Integer visit(IASTvariable iast, Void data) throws Throwable {
		return 0;
	}
	
}
