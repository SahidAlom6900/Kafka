package com.technpelevate.kafka.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.core.ParameterizedTypeReference;
import org.springframework.http.HttpEntity;
import org.springframework.http.HttpHeaders;
import org.springframework.http.HttpMethod;
import org.springframework.http.ResponseEntity;
import org.springframework.kafka.core.KafkaTemplate;
import org.springframework.kafka.support.SendResult;
import org.springframework.stereotype.Service;
import org.springframework.util.MultiValueMap;
import org.springframework.util.concurrent.ListenableFuture;
import org.springframework.util.concurrent.ListenableFutureCallback;
import org.springframework.util.concurrent.SuccessCallback;
import org.springframework.web.client.RestTemplate;

import com.technpelevate.kafka.dto.UserDto;

import lombok.extern.slf4j.Slf4j;

@Service
@Slf4j
public class KafkaProducerServiceImpl implements KafkaProducerService {

	@Autowired
	private KafkaTemplate<String, Object> kafkaTemplate;

	@Autowired
	private RestTemplate restTemplate;

	private String url = "https://gorest.co.in/public/v2/users";
	private String token = "1b4219e3f85f8227dbc7e966b46d334bca6120cec53664f85bbddcf7a9fac730";

	@Override
	public void sendMessageTopic01() {
		sendMessage("topic01");
	}

	private List<UserDto> getUsers() {
		HttpHeaders headers = new HttpHeaders();
		headers.setBearerAuth(token);
		HttpEntity<MultiValueMap<String, String>> request = new HttpEntity<MultiValueMap<String, String>>(null,
				headers);
		ResponseEntity<List<UserDto>> rateResponse = restTemplate.exchange(url, HttpMethod.GET, request,
				new ParameterizedTypeReference<List<UserDto>>() {
				});
		System.out.println(rateResponse.getBody());
		return rateResponse.getBody();
	}

	@Override
	public void sendMessageTopic02() {
		sendMessage("topic02");
	}
	
	private void sendMessage(String topic) {
		List<UserDto> users = getUsers();
		ListenableFuture<SendResult<String, Object>> future = kafkaTemplate.send(topic, users);
		future.addCallback(new SuccessCallback<Object>() {
			@Override
			public void onSuccess(Object result) {
				log.info("onSuccess Sent message with offset=[" + result + "]");
			}
		}, new ListenableFutureCallback<SendResult<String, Object>>() {
			@Override
			public void onSuccess(SendResult<String, Object> result) {
				log.info("ListenableFutureCallback Sent message with offset=[" + result.getRecordMetadata().offset()
						+ "]");
			}

			@Override
			public void onFailure(Throwable ex) {
				log.error("onFailure Unable to send message due to : " + ex.getMessage());
			}
		});
	}
}
