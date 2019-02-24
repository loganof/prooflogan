package SwingDnSupport;
import javax.swing.*;

public class SwingDnSupport {
	
		JFrame jf = new JFrame("Swing 的拖放支持。 \n");
		JTextArea srcTxt = new JTextArea(8, 30);
		JTextField jtf = new JTextField(34);
		public void init()
		{
			srcTxt.append("Swing 的拖放支持。 \n");
			srcTxt.append("将该文本域的内空拖入其他程序中.\n");
			
			srcTxt.setDragEnabled(true);
			jtf.setDragEnabled(true);
			jf.add(new JScrollPane(srcTxt));
			jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			jf.pack();
			jf.setVisible(true);
		}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new SwingDnSupport().init();
	}

}
