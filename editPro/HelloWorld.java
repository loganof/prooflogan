public class DiamondTest
{
	public static void main(String[] args)
	{
		List<String> books = new ArrayList<>();
		books.add("���Java����");
		books.add("���Android����");
		books.forEach(ele->System.out.println(ele.length()));
		Map<String, List<String>> schoolsInfo = new HashMap<>();
		List<String> schools = new ArrayList<>();
		schools.add("б�����Ƕ�");
		schools.add("����ȡ��·");
		schools.add("�����", schools);
		schoolsInfor.forEach((key, value)-> System.out.println(key + 
			"-->" + value));
	}
}
