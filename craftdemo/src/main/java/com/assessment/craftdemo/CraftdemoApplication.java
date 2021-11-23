package com.assessment.craftdemo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.boot.autoconfigure.jdbc.DataSourceAutoConfiguration;

@SpringBootApplication(exclude = {DataSourceAutoConfiguration.class}) 
public class CraftdemoApplication {

	public static void main(String[] args) {
		SpringApplication.run(CraftdemoApplication.class, args);
	}

}
