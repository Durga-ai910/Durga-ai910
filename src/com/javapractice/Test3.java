package com.javapractice;

public class Test3 {
	static String collegename;
	static String princi;
	int studentid;
	String studentname;
	int marks;
	String coursename;

	void studentdetails(int studentid, String studentname, String coursename, int marks) {
		System.out.println(studentid);
		System.out.println(studentname);
		System.out.println(coursename);
		System.out.println(marks);
	}

	void collegedetails(String collegename, String princi) {
		System.out.println(collegename);
		System.out.println(princi);
	}

	String changeprinci(String princi) {
		return princi;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Test3 t = new Test3();
		t.studentdetails(597, "Durga", "cse", 99);
		t.studentdetails(598, "Bhavani", "cse", 98);
		t.collegedetails("mlewc", "Appi");
		String princiname = t.changeprinci("Apparao");
		t.collegedetails("mlewc", princiname);

	}

}
