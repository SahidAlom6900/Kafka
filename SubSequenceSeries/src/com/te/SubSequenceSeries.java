package com.te;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class SubSequenceSeries {
	public static void main(String[] args) {
		List<String> list = Arrays.asList("A", "B", "C", "D", "E", "F","G");
		ArrayList<String> A1 = new ArrayList<>();
		ArrayList<String> A2 = new ArrayList<>();
		ArrayList<String> A3 = new ArrayList<>();
		A3.addAll(list);
		A2.addAll(list);
		for (int i = 0; i < list.size(); i++) {
			for (int j = 0; j < A2.size(); j++) {
				int length = A2.get(j).length();
				String substring = A2.get(j).substring(length - 1, length);
				int indexOf = list.indexOf(substring);
				for (int k = indexOf + 1; k < list.size(); k++) {
					A3.add(A2.get(j) + list.get(k));
					A1.add(A2.get(j) + list.get(k));
					System.out.println(A3);
				}
			}
			A2 = new ArrayList<>();
			A2.addAll(A1);
			A1 = new ArrayList<>();
		}
		System.out.println(A3);
	}
}
