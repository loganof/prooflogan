public class ForeachTest
{
	public static void main(String[] args)
	{
		String[] books = {"轻量级JAVA EE 企业级应用实战", 
			"疯狂Java讲义",
			"疯狂android讲义"};
		for(String book : books)
			System.out.println(book);
	}
}
