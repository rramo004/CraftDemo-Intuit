package com.assessment.craftdemo;


import java.util.Date;

import org.springframework.http.HttpStatus;

import io.grpc.ManagedChannel;
import io.grpc.ManagedChannelBuilder;


public class PersonalInfoService {
	
	private PersonalInformation pi;
	
	public PersonalInfoService() {
		this.pi = null;
	}
	
	public PersonalInfoService(PersonalInformation pi) {
		this.pi = pi;
	}
	
	public PersonalInformation getPersonalInfo() {
		return pi;
	}
	
	public HttpStatus setPersonalInfo(PersonalInformation pi) {
		String target = "localhost:50051";
		ManagedChannel channel = ManagedChannelBuilder.forTarget(target)
				.usePlaintext()
				.build();
		
		PersonalInformationServiceGrpc.PersonalInformationServiceBlockingStub stub = PersonalInformationServiceGrpc.newBlockingStub(channel);
		PersonalInfoReply response = stub.setInfo(PersonalInfoRequest.newBuilder()
				.setFirstName(pi.getFirstName())
				.setLastName(pi.getLastname())
				.setDateOfBirth(pi.getDob())
				.setEmail(pi.getEmail())
				.setPhoneNumber(pi.getPhoneNumber())
				.setTimestamp(new Date().getTime()).build());

		if (response.equals("204")) return HttpStatus.NO_CONTENT;
		else return HttpStatus.OK;
	}

}
