import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.border.LineBorder;
public class Home extends JFrame implements ActionListener {
    JPanel panelhome;
    JLabel stu, issue, ret, ren, stat, bookshelf;
    JButton sb, ib, rb, rnb, stb, bsb;
    public Home() {
        //setting jframe
        setSize(1020, 700);
        setTitle("Library Management System");

         //setting color
        Color c = new Color(245, 245, 245);

        //setting panelhome
        panelhome = new JPanel();
        setContentPane(panelhome);
        panelhome.setLayout(null);
        panelhome.setBackground(c);

        //setting font
        int BOLD = 10;
        Font f = new Font("Roboto", Font.BOLD, 15);

        //setting student image
        stu = new JLabel(new ImageIcon(ClassLoader.getSystemResource("student.png")));
        stu.setBounds(124, 20, 300, 300);
        panelhome.add(stu);

        //setting student button
        sb = new JButton("NEW STUDENT");
        sb.setBounds(200, 280, 150, 40);
        sb.setFont(f);
        sb.setBackground(c);
        sb.setForeground(Color.black);
        sb.setBorder(new LineBorder(Color.black, 2));
        sb.addActionListener(this);
        panelhome.add(sb);

        //setting issue image
        issue = new JLabel(new ImageIcon(ClassLoader.getSystemResource("issue.png")));
        issue.setBounds(400, 75, 200, 200);
        panelhome.add(issue);

        //setting issue button
        ib = new JButton("ISSUE BOOK");
        ib.setBounds(425, 280, 150, 40);
        ib.setFont(f);
        ib.setBackground(c);
        ib.setForeground(Color.black);
        ib.setBorder(new LineBorder(Color.black, 2));
        ib.addActionListener(this);
        panelhome.add(ib);

        //setting return image
        ret = new JLabel(new ImageIcon(ClassLoader.getSystemResource("return.png")));
        ret.setBounds(620, 75, 200, 200);
        panelhome.add(ret);

        //setting return button
        rb = new JButton("RETURN BOOK");
        rb.setBounds(645, 280, 150, 40);
        rb.setFont(f);
        rb.setBackground(c);
        rb.setForeground(Color.black);
        rb.setBorder(new LineBorder(Color.black, 2));
        rb.addActionListener(this);
        panelhome.add(rb);

        //setting renew image
        ren = new JLabel(new ImageIcon(ClassLoader.getSystemResource("renew.png")));
        ren.setBounds(124, 300, 300, 300);
        panelhome.add(ren);

        //setting renew button
        rnb = new JButton("RENEW BOOK");
        rnb.setBounds(200, 570, 150, 40);
        rnb.setFont(f);
        rnb.setBackground(c);
        rnb.setForeground(Color.black);
        rnb.setBorder(new LineBorder(Color.black, 2));
        rnb.addActionListener(this);
        panelhome.add(rnb);

        //setting statistics image
        stat = new JLabel(new ImageIcon(ClassLoader.getSystemResource("statistics.png")));
        stat.setBounds(400, 350, 200, 200);
        panelhome.add(stat);

        //setting statistics button
        stb = new JButton("STATISTICS");
        stb.setBounds(425, 570, 150, 40);
        stb.setFont(f);
        stb.setBackground(c);
        stb.setForeground(Color.black);
        stb.setBorder(new LineBorder(Color.black, 2));
        stb.addActionListener(this);
        panelhome.add(stb);

        //setting bookshelf
        bookshelf = new JLabel(new ImageIcon(ClassLoader.getSystemResource("bookshelf.png")));
        bookshelf.setBounds(620, 360, 200, 200);
        panelhome.add(bookshelf);

        //setting bookshelf button
        bsb = new JButton("BOOKSHELF");
        bsb.setBounds(645, 570, 150, 40);
        bsb.setFont(f);
        bsb.setBackground(c);
        bsb.setForeground(Color.black);
        bsb.setBorder(new LineBorder(Color.black, 2));
        bsb.addActionListener(this);
        panelhome.add(bsb);
    }
     public void actionPerformed(ActionEvent e) {
            if(e.getSource() == sb){
                new Student().setVisible(true);
            }
            if(e.getSource() == ib) {
                new IssueBook().setVisible(true);
            }
            if(e.getSource() == rb) {
                new ReturnBook().setVisible(true);
            }
            if(e.getSource() == rnb) {
                new RenewBook().setVisible(true);
            }
            if(e.getSource() == stb){
                new Statistics().setVisible(true);
            }
            if(e.getSource() == bsb){
                new Bookshelf().setVisible(true);
            }
        }
    public static void main(String[] args){
        Home obj = new Home();
        obj.setVisible(true);
    }
}
