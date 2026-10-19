package com.javapractice;

public class Bank {
	int accno;
	int balance;
	String holdername;
	static String bankname;

	public static void main(String[] args) {
		
		Bank obj1= new Bank();
		obj1.Display(1234, 80000, "Durga Bhavani", "union bank of india");
		
		

		Bank obj2= new Bank();
		obj2.Display(12345, 855000, "Swathi", "union bank of india");
	}
	void Display(int accno, int balance, String holdername, String bankname)
	{
		System.out.println(accno);
		System.out.println(balance);
		System.out.println(holdername);
		System.out.println(bankname);
	}

}
