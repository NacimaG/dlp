package com.paracamplus.ilp2.ilp2tme4.test2;

import org.antlr.v4.runtime.ANTLRInputStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTreeWalker;

import antlr4.ILPMLGrammar2TME4Lexer;
import antlr4.ILPMLGrammar2TME4Parser;
import com.paracamplus.ilp2.ilp2tme4.AST.ASTtransform;
import com.paracamplus.ilp2.ilp2tme4.Interface.IASTfactory;
import com.paracamplus.ilp2.interfaces.IASTprogram;
import com.paracamplus.ilp1.parser.ParseException;




public class ILPMLParser extends com.paracamplus.ilp2.parser.ilpml.ILPMLParser
 {
	public ILPMLParser(IASTfactory factory) {
		super(factory);
		
	}

		
    public IASTprogram getProgram() throws ParseException {
		try {
			ANTLRInputStream in = new ANTLRInputStream(input.getText());
			// flux de caractères -> analyseur lexical
			ILPMLGrammar2TME4Lexer lexer = new ILPMLGrammar2TME4Lexer(in);
			// analyseur lexical -> flux de tokens
			CommonTokenStream tokens =	new CommonTokenStream(lexer);
			// flux tokens -> analyseur syntaxique
			ILPMLGrammar2TME4Parser parser = new ILPMLGrammar2TME4Parser(tokens);
			// démarage de l'analyse syntaxique
			ILPMLGrammar2TME4Parser.ProgContext tree = parser.prog();		
			// parcours de l'arbre syntaxique et appels du Listener
			ParseTreeWalker walker = new ParseTreeWalker();
			ILPMLListener extractor = new ILPMLListener((IASTfactory) factory);
			walker.walk(extractor, tree);
			ASTtransform t = new ASTtransform();
			return t.transform(tree.node);
		} catch (Exception e) {
			throw new ParseException(e);
		}
    }

}
