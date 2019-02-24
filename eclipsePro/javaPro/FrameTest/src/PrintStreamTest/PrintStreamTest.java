package PrintStreamTest;
import java.io.*;

public class PrintStreamTest {
	
	public static void main(String[] args)
	{
		try(
				FileOutputStream fos = new FileOutputStream("test.txt");
				PrintStream ps = new PrintStream(fos)
				)
		{
			ps.println("ÆÕÍ¨×Ö·û´®");
			ps.println(new PrintStreamTest());
		}
		catch(IOException ioe)
		{
			ioe.printStackTrace();
		}
	}

}
