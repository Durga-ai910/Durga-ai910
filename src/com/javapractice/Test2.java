package com.javapractice;

public class Test2 {
	static void method1()
	{
		method2();
		System.out.println(" first static  method");
	}
	static void method2()
	{
		Test2 t1= new Test2();
		t1.method3();
		System.out.println(" second static block");
	}
	void method3()
	{
		method4();
		System.out.println(" first instance method");
	}
	void method4()
	{
		System.out.println(" second instance method");
	}
	public static void main(String[] args)
	{
		System.out.println(" main method started");
		method1();
		System.out.println(" main method ended");
	}

}
