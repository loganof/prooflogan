package DiamondTest;

import java.util.*;
import java.util.Map;

public class DiamondTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		List<String> books = new ArrayList<>();
		books.add("���Java����");
		books.add("���Android����");
		Map<String, List<String>> schoolsInfo = new HashMap<>();
		List<String> schools = new ArrayList<>();
		schools.add("б�����Ƕ�");
		schools.add("����ȡ��·");
		schoolsInfo.put("�����",schools);
		schoolsInfo.forEach((key, value)->System.out.println(key + " -->"
				+ value));
	}

}
