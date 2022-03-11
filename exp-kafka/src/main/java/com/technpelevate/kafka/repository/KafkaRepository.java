package com.technpelevate.kafka.repository;

import org.springframework.data.jpa.repository.JpaRepository;

import com.technpelevate.kafka.pojo.User;

public interface KafkaRepository extends JpaRepository<User, Integer> {

}
