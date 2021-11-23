package com.assessment.craftdemo;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.ResponseStatus;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.http.HttpStatus;

@RestController
public class PersonalInformationController {
	
	private final PersonalInfoService service = new PersonalInfoService();

	@GetMapping("/personalinformation")
	public PersonalInformation personalInformation() {
		return service.getPersonalInfo();
	}
	
	@PostMapping("/updatepersonalinformation")
	@ResponseStatus(HttpStatus.NO_CONTENT)
	public HttpStatus personalInformation(@RequestBody PersonalInformation pi) {
	    return service.setPersonalInfo(pi);
	}

}
