package fisrtPro;

class DataWrap
{
	int a;
	int b;
}

public class FrameTest
{
	public static void swap(DataWrap dw)
	{
		int tmp = dw.a;
		dw.a = dw.b;
		dw.b = tmp;
		System.out.println("swap方法里，a的值是" + dw.a + ";b的值是" + dw.b);
	}
	public static void main(String[]args)
	{
		DataWrap dw = new DataWrap();
		dw.a = 6;
		dw.b = 9;
		swap(dw);
		System.out.println("交换后，a的值" + dw.a + ";b的值是" + dw.b);
	}
	
}