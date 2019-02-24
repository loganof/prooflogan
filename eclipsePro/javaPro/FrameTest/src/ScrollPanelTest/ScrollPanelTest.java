package ScrollPanelTest;
import java.awt.*;


public class ScrollPanelTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Frame f = new Frame("测试窗口中");
		
		ScrollPane sp = new ScrollPane(ScrollPane.SCROLLBARS_ALWAYS);
		sp.add(new TextField(20));
		sp.add(new Button("单击我")); 
		f.add(sp);
		f.setBounds(30, 30, 250, 120);
		f.setVisible(true);
	}

}
