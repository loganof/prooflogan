package InetAddressTest;
import java.net.*;

public class InetAddressTest {

	public static void main(String[] args)
	throws Exception
	{
		// TODO Auto-generated method stub
		String keyWord = URLDecoder.decode("%E7%96%AF%E7%8B%82java",
				"utf-8");
		System.out.println(keyWord);
		
		String urlStr = URLEncoder.encode(
				"·è¿ñAndroid½²Òå", "GBK");
		System.out.println(urlStr);
	}
}