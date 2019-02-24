package ListErr;

import java.util.*;

public class ListErr {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		List<String> strList = new ArrayList<>();
		strList.add("疯狂Java讲义");
		strList.add("疯狂Android讲义");
		
		//strList.add(5);
		strList.forEach(str -> System.out.println(str.length()));
		Map<String, List<String>> schoolsInfo= new HashMap<>();
		List<String> schools = new ArrayList<>();
		schools.add("斜月三星路");
		schools.add("西天取经路"); 
		schoolsInfo.put("孙悟空", schools);
		
		schoolsInfo.forEach((key, value) -> System.out.println(key + "-->" + value));
		
	}

}
