//import javax.swing.*;
//import java.awt.event.*;
//import javax.swing.*; 
import java.awt.*; 
//import java.awt.event.*; 

public class PanelTest
{
	public static void main(String[] args) 
	{
		Frame f = new Frame("���Դ���");
		Panel p = new Panel();

		p.add(new TextField(20));
		p.add(new Button("������"));
		f.add(p);
		f.setBounds(30, 30, 250, 120);
		f.setVisible(true);
	}
}