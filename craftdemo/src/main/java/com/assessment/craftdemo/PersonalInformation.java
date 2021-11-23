package com.assessment.craftdemo;

import java.util.Date;

public class PersonalInformation {

	private final String firstName;
	private final String lastname;
	private final String dob;
	private final String email;
	private final String phoneNumber;
	
	public PersonalInformation() {
		this.firstName = "";
		this.lastname = "";
		this.dob = "";
		this.email = "";
		this.phoneNumber = "";
	}
	
	public PersonalInformation(String firstName, String lastName, String dob, String email, String phoneNumber) {
		this.firstName = firstName;
		this.lastname = lastName;
		this.dob = dob;
		this.email = email;
		this.phoneNumber = phoneNumber;
	}

	public String getFirstName() {
		return firstName;
	}

	public String getLastname() {
		return lastname;
	}

	public String getDob() {
		return dob;
	}

	public String getEmail() {
		return email;
	}

	public String getPhoneNumber() {
		return phoneNumber;
	}
}
