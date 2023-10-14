import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.border.LineBorder;
public class Login extends JFrame implements ActionListener {
    JPanel panel;
    JLabel l1, l2, img, l3;
    JTextField t1;
    JPasswordField t2;
    JButton b;
    public Login() {
        //Setting frame
        setVisible(true);
        setSize(530, 530);
        setTitle("Library Management System");

        //setting color
        Color c = new Color(245, 245, 245);

        //setting panel
        panel = new JPanel();
        panel.setBackground(c);
        setContentPane(panel);
        panel.setLayout(null);

        //setting font
        int BOLD = 10;
        Font f = new Font("Roboto", Font.BOLD, 15);

        //setting image
        img = new JLabel(new ImageIcon(ClassLoader.getSystemResource("library.png")));
        img.setBounds(124, 20, 260, 260);
        panel.add(img);

        //setting username
        l1 = new JLabel("USERNAME");
	    l1.setBounds(124, 250, 95, 24);
        l1.setFont(f);
        l1.setForeground(Color.black);
	    panel.add(l1);

        //setting textfield
        t1 = new JTextField();
        t1.setEnabled(true);
        t1.setBounds(230, 250, 157, 25);
        t1.setBorder(new LineBorder(Color.black,2));
        t1.setForeground(Color.black);
        panel.add(t1);

        //setting password
        l2 = new JLabel("PASSWORD");
	    l2.setBounds(124, 290, 95, 24);
        l2.setFont(f);
        l2.setForeground(Color.black);
	    panel.add(l2);

        //setting password field
        t2 = new JPasswordField();
        t2.setEnabled(true);
        t2.setBounds(230, 290, 157, 25);
        t2.setBorder(new LineBorder(Color.black, 2));
        t2.setEchoChar('*');
        t2.setForeground(Color.black);
        panel.add(t2);

        //setting login button
        b = new JButton("LOGIN");
        b.setBounds(177, 340, 150, 40);
        b.setFont(f);
        b.setBackground(c);
        b.setForeground(Color.black);
        b.addActionListener(this);
        panel.add(b);

        //setting login error label
        l3 = new JLabel();
        l3.setForeground(Color.red);
        l3.setBounds(140, 400, 250, 40);
        l3.setFont(f);
        panel.add(l3);
    }
    public void actionPerformed(ActionEvent e){
        String u =  t1.getText();
        String p = String.valueOf(t2.getPassword());
        if(e.getSource() == b) {
             if(u.equals("admin") && p.equals("admin")){
                l3.setForeground(Color.green);
                l3.setText("Logged In Successfully!");
                l3.setBounds(170, 400, 250, 40);
            new Home().setVisible(true);
            }
            else{
            l3.setText("Invalid Username or Password!");
            }
        }
    }
    public static void main(String[] args){
        Login obj = new Login();
    }
}