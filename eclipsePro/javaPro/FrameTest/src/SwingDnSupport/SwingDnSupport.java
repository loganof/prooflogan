package SwingDnSupport;
import javax.swing.*;

public class SwingDnSupport {
	
		JFrame jf = new JFrame("Swing ���Ϸ�֧�֡� \n");
		JTextArea srcTxt = new JTextArea(8, 30);
		JTextField jtf = new JTextField(34);
		public void init()
		{
			srcTxt.append("Swing ���Ϸ�֧�֡� \n");
			srcTxt.append("�����ı�����ڿ���������������.\n");
			
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
