package com.technpelevate.kafka.config;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.apache.kafka.clients.admin.AdminClientConfig;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.kafka.core.KafkaAdmin;

@Configuration
public class KafkaTopicCreateConfig {
	@Value(value = "${kafka.bootstrap-servers}")
	private List<String> bootstrapServer;/* = Arrays.asList("localhost:9092", "localhost:9093", "localhost:9094");*/
	
//	@Bean
//	public NewTopic compactTopicExample() {
//		return TopicBuilder.name("my-topic").partitions(3).replicas(3).compact().build();
//	}
	
	@Bean
    public KafkaAdmin kafkaAdmin() {
		System.out.println(bootstrapServer);
        Map<String, Object> configs = new HashMap<>();
        configs.put(AdminClientConfig.BOOTSTRAP_SERVERS_CONFIG, bootstrapServer);
        return new KafkaAdmin(configs);
    }
}
