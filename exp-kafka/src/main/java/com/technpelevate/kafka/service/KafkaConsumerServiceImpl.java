package com.technpelevate.kafka.service;

import org.springframework.kafka.annotation.KafkaListener;
import org.springframework.stereotype.Service;

@Service
public class KafkaConsumerServiceImpl implements KafkaConsumerService{
	
	@KafkaListener(topics = "topic01",groupId = "groupId-01",containerFactory = "userKafkaListenerContainerFactory")
	public void consume1(Object data) {
		System.out.println(" Hi From Spring boot Class topic01 "+data);
	}
	
	@KafkaListener(topics = "topic02",groupId = "groupId-02",containerFactory = "userKafkaListenerContainerFactory")
	public void consume2(Object data) {
		System.out.println(" Hi From Spring boot Class topic02 "+data);
	}
}
