package com.paracamplus.ilp4.ilp4tme8.parser;

import org.antlr.v4.runtime.ANTLRInputStream;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTreeWalker;

import com.paracamplus.ilp1.parser.ParseException;
import com.paracamplus.ilp4.ilp4tme8.interfaces.IASTfactory;
import com.paracamplus.ilp4.interfaces.IASTprogram;

import antlr4.ILPMLgrammar4tme8Lexer;
import antlr4.ILPMLgrammar4tme8Parser;

public class ILPMLParser extends com.paracamplus.ilp4.parser.ilpml.ILPMLParser{

	public ILPMLParser(IASTfactory factory) {
		super(factory);
		// TODO Auto-generated constructor stub
	}
	@Override
    public IASTprogram getProgram() throws ParseException {
		try {
			ANTLRInputStream in = new ANTLRInputStream(input.getText());
			// flux de caractères -> analyseur lexical
			ILPMLgrammar4tme8Lexer lexer = new ILPMLgrammar4tme8Lexer(in);
			// analyseur lexical -> flux de tokens
			CommonTokenStream tokens =	new CommonTokenStream(lexer);
			// flux tokens -> analyseur syntaxique
			ILPMLgrammar4tme8Parser parser = new ILPMLgrammar4tme8Parser(tokens);
			// démarage de l'analyse syntaxique
			ILPMLgrammar4tme8Parser.ProgContext tree = parser.prog();		
			// parcours de l'arbre syntaxique et appels du Listener
			ParseTreeWalker walker = new ParseTreeWalker();
			ILPMLListener extractor = new ILPMLListener((IASTfactory)factory);
			walker.walk(extractor, tree);	
			return tree.node;
		} catch (Exception e) {
			throw new ParseException(e);
		}
    }

}
