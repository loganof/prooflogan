package ListErr;

import java.util.*;

public class ListErr {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		List<String> strList = new ArrayList<>();
		strList.add("���Java����");
		strList.add("���Android����");
		
		//strList.add(5);
		strList.forEach(str -> System.out.println(str.length()));
		Map<String, List<String>> schoolsInfo= new HashMap<>();
		List<String> schools = new ArrayList<>();
		schools.add("б������·");
		schools.add("����ȡ��·"); 
		schoolsInfo.put("�����", schools);
		
		schoolsInfo.forEach((key, value) -> System.out.println(key + "-->" + value));
		
	}

}
