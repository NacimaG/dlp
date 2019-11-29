package com.paracamplus.ilp3.ilp3tme7.test;

import java.io.File;
import java.io.StringWriter;
import java.util.Collection;

import org.junit.runners.Parameterized.Parameters;

import com.paracamplus.ilp1.interpreter.GlobalVariableEnvironment;
import com.paracamplus.ilp1.interpreter.OperatorEnvironment;
import com.paracamplus.ilp1.interpreter.OperatorStuff;
import com.paracamplus.ilp1.interpreter.interfaces.EvaluationException;
import com.paracamplus.ilp1.interpreter.interfaces.IGlobalVariableEnvironment;
import com.paracamplus.ilp1.interpreter.interfaces.IOperatorEnvironment;
import com.paracamplus.ilp1.interpreter.test.InterpreterRunner;
import com.paracamplus.ilp1.parser.xml.IXMLParser;
import com.paracamplus.ilp3.ilp3tme7.ast.ASTfactory;
import com.paracamplus.ilp3.ilp3tme7.interfaces.IASTfactory;
import com.paracamplus.ilp3.ilp3tme7.parser.ILPMLParser;
import com.paracamplus.ilp3.ilp3tme7.interpreter.GlobalVariableStuff;
import com.paracamplus.ilp3.ilp3tme7.interpreter.Interpreter;
import com.paracamplus.ilp3.parser.xml.XMLParser;

public class InterpreterTest extends com.paracamplus.ilp3.interpreter.test.InterpreterTest{

	public InterpreterTest(File file) {
		super(file);
		// TODO Auto-generated constructor stub
	}
	   protected static String[] samplesDirName = { "SamplesTME7" };
	    protected static String pattern = "*.*";
	    protected static String grammarFile = "XMLGrammars/grammar3.rng";
	        
	   
	    
	    public void configureRunner(InterpreterRunner run) throws EvaluationException {
	    	// configuration du parseur
	        IASTfactory factory = new ASTfactory();
	        IXMLParser xmlparser = new XMLParser(factory);
	        xmlparser.setGrammar(new File(grammarFile));
	        run.setXMLParser(xmlparser);
	        run.setILPMLParser(new ILPMLParser(factory));

	        // configuration de l'interprète
	        StringWriter stdout = new StringWriter();
	        run.setStdout(stdout);
	        IGlobalVariableEnvironment gve = new GlobalVariableEnvironment();
	        GlobalVariableStuff.fillGlobalVariables(gve, stdout);
	        IOperatorEnvironment oe = new OperatorEnvironment();
	        OperatorStuff.fillUnaryOperators(oe);
	        OperatorStuff.fillBinaryOperators(oe);
	        Interpreter interpreter = new Interpreter(gve, oe);        
	        run.setInterpreter(interpreter);
	    }
	            
	    @Parameters(name = "{0}")
	    public static Collection<File[]> data() throws Exception {
	    	return InterpreterRunner.getFileList(samplesDirName, pattern);
	    }    	

}
