package com.technpelevate.kafka.pojo;

import java.io.Serializable;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.Id;
import javax.persistence.Table;

import org.hibernate.annotations.GenericGenerator;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

@SuppressWarnings("serial")
@Entity
@AllArgsConstructor
@NoArgsConstructor
@Data
@Table(name = "user_details")
public class User implements Serializable {
	@Id
//	@GenericGenerator(name = "uuid", strategy = "org.hibernate.id.UUIDGenerator")
//	@GeneratedValue(generator = "uuid")
	private int id;
	private String name;
	private long phone;
	private String address;
}
