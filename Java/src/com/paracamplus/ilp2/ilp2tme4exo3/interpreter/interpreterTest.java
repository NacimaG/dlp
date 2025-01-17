package com.paracamplus.ilp2.ilp2tme4exo3.interpreter;

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
import com.paracamplus.ilp1.interpreter.test.InterpreterTest;
import com.paracamplus.ilp1.parser.xml.IXMLParser;
import com.paracamplus.ilp1.parser.xml.XMLParser;
import com.paracamplus.ilp2.ilp2tme4exo3.ast.ASTfactory;
import com.paracamplus.ilp2.ilp2tme3.GlobalVariableStuff;
import com.paracamplus.ilp2.ilp2tme4.parser.ILPMLParser;
import com.paracamplus.ilp2.ilp2tme4exo3.interfaces.IASTfactory;

public class interpreterTest extends InterpreterTest {

	protected static String[] samplesDirName = { "SamplesTme4" }; 
	protected static String pattern = "*.*";

	
	
	public interpreterTest(File file) {
		super(file);
		// TODO Auto-generated constructor stub
	}
	@Parameters(name = "{0}")
	public static Collection<File[]> data() throws Exception {
		return InterpreterRunner.getFileList(samplesDirName, pattern);
	}
	
	public void configureRunner(InterpreterRunner run) throws EvaluationException {
    	// configuration du parseur
        IASTfactory factory =  new ASTfactory();
        IXMLParser xmlParser = new XMLParser(factory);
        xmlParser.setGrammar(new File(XMLgrammarFile));
        run.setXMLParser(xmlParser);
        run.setILPMLParser(new ILPMLParser(factory));

        // configuration de l'interprète
        StringWriter stdout = new StringWriter();
        run.setStdout(stdout);
        IGlobalVariableEnvironment gve = new GlobalVariableEnvironment();
        GlobalVariableStuff.fillGlobalVariables(gve, stdout);
        IOperatorEnvironment oe = new OperatorEnvironment();
        OperatorStuff.fillUnaryOperators(oe);
        OperatorStuff.fillBinaryOperators(oe);
        
       
        interpreter interpreter = new interpreter(gve, oe);        
        run.setInterpreter(interpreter);
    }
    

}
