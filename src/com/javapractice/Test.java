package com.javapractice;

public class Test {
	Test t= new Test();
	static {
		System.out.println(" Static block1");
	}
	{
		System.out.println(" instance block");
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("block 1");
		System.out.println("block 2");

	}
	static {
		System.out.println("static block2");
	}

}
