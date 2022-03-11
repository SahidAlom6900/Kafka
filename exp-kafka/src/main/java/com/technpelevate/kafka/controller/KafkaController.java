package com.technpelevate.kafka.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.technpelevate.kafka.service.KafkaProducerService;
import com.technpelevate.kafka.service.UserService;

@RestController
@RequestMapping("api/v1/kafka")
public class KafkaController {
	@Autowired
	private KafkaProducerService KafkaProducerService;
	@Autowired
	private UserService userService;

	@GetMapping("topic01")
	public void sendMessageTopic01() {
		KafkaProducerService.sendMessageTopic01();
	}

	@GetMapping("topic02")
	public void sendMessageTopic02() {
		KafkaProducerService.sendMessageTopic02();
	}

}
