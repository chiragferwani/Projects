import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.border.LineBorder;
public class Student extends JFrame implements ActionListener {
    JPanel panelstudent;
    JLabel nstu, sname, senr, dept, year, details;
    JTextField t1, t2;
    JComboBox deptc, yearc;
    JButton save;
    public Student() {
        //setting jframe
        setSize(520, 580);
        setTitle("Library Management System");

        //setting color
        Color c = new Color(245, 245, 245);

        //setting font
        int BOLD = 10;
        Font f = new Font("Roboto", Font.BOLD, 15);

        //setting panelstudent
        panelstudent = new JPanel();
        setContentPane(panelstudent);
        panelstudent.setLayout(null);
        panelstudent.setBackground(c);

        //setting new student image
        nstu = new JLabel(new ImageIcon(ClassLoader.getSystemResource("new student.png")));
        nstu.setBounds(120, 20, 260, 260);
        panelstudent.add(nstu);

        //setting student name label
        sname = new JLabel("STUDENT NAME");
	    sname.setBounds(100, 270, 150, 24);
        sname.setFont(f);
        sname.setForeground(Color.black);
	    panelstudent.add(sname);

        //setting textfield
        t1 = new JTextField();
        t1.setEnabled(true);
        t1.setBounds(230, 270, 157, 25);
        t1.setBorder(new LineBorder(Color.black,2));
        t1.setForeground(Color.black);
        t1.addActionListener(this);
        panelstudent.add(t1);

        //setting enrollment number
        senr = new JLabel("ENROLLMENT NO");
	    senr.setBounds(88, 310, 200, 24);
        senr.setFont(f);
        senr.setForeground(Color.black);
	    panelstudent.add(senr);

        //setting textfield 2
        t2 = new JTextField();
        t2.setEnabled(true);
        t2.setBounds(230, 310, 157, 25);
        t2.setBorder(new LineBorder(Color.black,2));
        t2.setForeground(Color.black);
        t2.addActionListener(this);
        panelstudent.add(t2);

        //setting department label
        dept = new JLabel("DEPARTMENT");
	    dept.setBounds(112, 350, 200, 24);
        dept.setFont(f);
        dept.setForeground(Color.black);
	    panelstudent.add(dept);

        //setting combobox for department
        deptc = new JComboBox();
        deptc.setBounds(230, 350, 157, 25);
        deptc.setFont(f);
        deptc.setBorder(new LineBorder(Color.black,2));
        deptc.setForeground(Color.black);
        deptc.setBackground(c);
        deptc.addItem(" ");
        deptc.addItem("IT");
        deptc.addItem("CO");
        deptc.addItem("ME");
        deptc.addItem("ENTC");
        deptc.addItem("CIVIL");
        panelstudent.add(deptc);

        //setting year label
        year = new JLabel("YEAR");
	    year.setBounds(177, 390, 200, 24);
        year.setFont(f);
        year.setForeground(Color.black);
	    panelstudent.add(year);

        //setting combobox for year
        yearc = new JComboBox();
        yearc.setBounds(230, 390, 157, 25);
        yearc.setFont(f);
        yearc.setBorder(new LineBorder(Color.black,2));
        yearc.setForeground(Color.black);
        yearc.setBackground(c);
        yearc.addItem(" ");
        yearc.addItem("FY");
        yearc.addItem("SY");
        yearc.addItem("TY");
        panelstudent.add(yearc);

        //setting save button
        save = new JButton("SAVE");
        save.setBounds(177, 450, 150, 40);
        save.setFont(f);
        save.setBackground(c);
        save.setForeground(Color.black);
        save.addActionListener(this);
        panelstudent.add(save);

        //setting details label
        details = new JLabel();
        details.setBounds(160, 500, 250, 40);
        details.setFont(f);
        panelstudent.add(details);
    }
    public void actionPerformed(ActionEvent e) {
        String s1 = t1.getText();
        String s2 = t2.getText();
        String s3 = deptc.getSelectedItem().toString();
        String s4 = yearc.getSelectedItem().toString();
        if(e.getSource() == save) {
            if((s1.isEmpty()) || (s2.isEmpty()) || (s3.isEmpty()) || (s4.isEmpty())) {
                details.setBounds(180, 500, 250, 40);
                details.setForeground(Color.red);
                details.setText("Please Enter Details!");
            }
            else{
                details.setBounds(160, 500, 250, 40);
                details.setForeground(Color.green);
                details.setText("Details Saved Successfully!");
            }
        }
    }
    public static void main(String[] args){
        Student obj = new Student();
        obj.setVisible(true);
    }
}
