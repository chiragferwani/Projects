package com;

import org.apache.logging.log4j.LogManager;
import org.apache.logging.log4j.Logger;

public class test {

	public static final Logger LOGGER = LogManager.getLogger(test.class);
	
	public static void main(String[] args)
	{
		System.out.println("main method start.");
		LOGGER.debug("main method started.");
		test t = new test();
		System.out.println("main method end");
	}
}
