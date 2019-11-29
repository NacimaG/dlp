package com.paracamplus.ilp2.ilp2tme5.compiler.test;

import java.io.File;
import java.util.Collection;

import org.junit.runners.Parameterized.Parameters;

import com.paracamplus.ilp1.compiler.CompilationException;
import com.paracamplus.ilp1.compiler.GlobalVariableEnvironment;
import com.paracamplus.ilp1.compiler.GlobalVariableStuff;
import com.paracamplus.ilp1.compiler.OperatorEnvironment;
import com.paracamplus.ilp1.compiler.OperatorStuff;
import com.paracamplus.ilp1.compiler.interfaces.IGlobalVariableEnvironment;
import com.paracamplus.ilp1.compiler.interfaces.IOperatorEnvironment;
import com.paracamplus.ilp1.compiler.optimizer.IdentityOptimizer;
import com.paracamplus.ilp1.compiler.test.CompilerRunner;
import com.paracamplus.ilp1.parser.xml.IXMLParser;
import com.paracamplus.ilp2.ilp2tme5.ast.ASTFactory;
import com.paracamplus.ilp2.ilp2tme5.interfaces.IASTFactory;
import com.paracamplus.ilp2.ilp2tme5.parser.ILPMLParser;
import com.paracamplus.ilp2.parser.xml.XMLParser;

public class CompilerTest extends com.paracamplus.ilp2.compiler.test.CompilerTest{

	public CompilerTest(File file) {
		super(file);
		// TODO Auto-generated constructor stub
	}
	protected static String[] samplesDirName = { "SamplesTme5" };
    protected static String pattern = "*.*";
    
    
    @Override
    public void configureRunner(CompilerRunner run) throws CompilationException {
    	// configuration du parseur
        IASTFactory factory = new ASTFactory();
        IXMLParser xMLParser = new XMLParser(factory);
        xMLParser.setGrammar(new File(XMLgrammarFile));
        run.setXMLParser(xMLParser);
        run.setILPMLParser(new ILPMLParser(factory));

        // configuration du compilateur
        IOperatorEnvironment ioe = new OperatorEnvironment();
        OperatorStuff.fillUnaryOperators(ioe);
        OperatorStuff.fillBinaryOperators(ioe);
        IGlobalVariableEnvironment gve = new GlobalVariableEnvironment();
        GlobalVariableStuff.fillGlobalVariables(gve);//new Compiler(ioe, gve);
        com.paracamplus.ilp2.ilp2tme5.compiler.Compiler compiler = new com.paracamplus.ilp2.ilp2tme5.compiler.Compiler(ioe,gve);
        compiler.setOptimizer(new IdentityOptimizer());
        run.setCompiler(compiler);

        // configuration du script de compilation et exécution
        run.setRuntimeScript(scriptCommand);    	
    }
    
    @Parameters(name = "{0}")
    public static Collection<File[]> data() throws Exception {
    	return CompilerRunner.getFileList(samplesDirName, pattern);
    }    	

}
