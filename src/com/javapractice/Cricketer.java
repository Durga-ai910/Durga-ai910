package com.javapractice;

public class Cricketer {
	static {
		System.out.println("This is block executed first before the main , when the main method is present in the class"
				+ "whereever the place , it executes first before the main method");
	}

	Cricketer() {
		System.out.println("This is the constructor , it executes wheneever you create the object");
	}

	// these are the static variables we can access them without creating the object
	// also and default variables are assigns
	static String countryname = "India";

	// these are the instance variables we can only access whenever we create the
	// object and default variables doesn't assigns
	int jersyno = 7;
	String name = "name";

	public static void main(String[] args) {
		System.out.println("creating object 1 ***");
		Cricketer msd = new Cricketer();
		msd.jersyno = 9;
		msd.name = "Mahindra singh Dhoni";
		System.out.println(countryname);
		System.out.println(msd.jersyno);
		System.out.println(msd.name);

		System.out.println("creating object 2 ***");
		Cricketer vk = new Cricketer();
		vk.jersyno = 18;
		vk.name = "Virat Kohli";
		System.out.println(countryname);
		System.out.println(vk.jersyno);
		System.out.println(vk.name);

		System.out.println("creating object 3 ***");
		Cricketer rs = new Cricketer();
		rs.jersyno = 56;
		rs.name = "Rohit Sharma";
		System.out.println(countryname);
		System.out.println(vk.jersyno);
		System.out.println(vk.name);

		System.out.println("creating object 3 ***");
		Cricketer nk = new Cricketer();
		nk.jersyno = 45;
		nk.name = "Nithish Kumar Reddy";
		System.out.println(countryname);
		System.out.println(vk.jersyno);
		System.out.println(vk.name);

	}
}
