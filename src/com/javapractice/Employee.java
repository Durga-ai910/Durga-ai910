package com.javapractice;

public class Employee {
	static  String Cname="Infosys";
	String ename;
	int eid;
	String dept;
	int salary;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Employee Durga= new Employee();
		System.out.println(Cname+"   "+ Durga.ename+"    "+Durga.eid+"    "+Durga.dept+"    "+Durga.salary);
		
		Employee Bhavani= new Employee();
		Bhavani.ename="Surepalli Durga Bhavani";
		Bhavani.eid=597;
		Bhavani.dept="Computer science and Engineering";
		Bhavani.salary=89000;
		System.out.println(Bhavani.Cname);
		System.out.println(Bhavani.ename);
		System.out.println(Bhavani.eid);
		System.out.println(Bhavani.dept);
		System.out.println(Bhavani.salary);
		
		
		
		Employee Swathi= new Employee();
		Cname="Cognizant";
		Swathi.ename="Swathisri";
		Swathi.eid=34;
		Swathi.dept="Computer science and Engineering";
		Swathi.salary=92000;
		System.out.println(Swathi.Cname);
		System.out.println(Swathi.ename);
		System.out.println(Swathi.eid);
		System.out.println(Swathi.dept);
		System.out.println(Swathi.salary);
	}

}
