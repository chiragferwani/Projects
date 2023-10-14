import java.awt.*;
import java.awt.event.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;

import javax.swing.*;
import javax.swing.border.LineBorder;

import java.util.Calendar;
import java.util.Date;
import java.util.Properties;

import javax.swing.JFormattedTextField.AbstractFormatter;

import org.jdatepicker.impl.JDatePanelImpl;
import org.jdatepicker.impl.JDatePickerImpl;
import org.jdatepicker.impl.SqlDateModel;
public class IssueBook extends JFrame implements ActionListener{
    JPanel panelissue;
    JLabel isb, bname, bid, date, l3;
    JTextField t1, t2;
    JDatePickerImpl datepicker;
    JButton b;
    String strDate, s1, s2;
    public IssueBook() {
        //setting jframe
        setSize(520, 580);
        setTitle("Library Management System");

        //setting color
        Color c = new Color(245, 245, 245);

        //setting font
        int BOLD = 10;
        Font f = new Font("Roboto", Font.BOLD, 15);

        //setting panelstudent
        panelissue = new JPanel();
        setContentPane(panelissue);
        panelissue.setLayout(null);
        panelissue.setBackground(c);

        //setting issue book image
        isb = new JLabel(new ImageIcon(ClassLoader.getSystemResource("issuebook.png")));
        isb.setBounds(120, 20, 260, 260);
        panelissue.add(isb);

        //setting book name label
        bname = new JLabel("BOOK NAME");
	    bname.setBounds(125, 280, 150, 24);
        bname.setFont(f);
        bname.setForeground(Color.black);
	    panelissue.add(bname);

        //setting textfield
        t1 = new JTextField();
        t1.setEnabled(true);
        t1.setBounds(230, 280, 157, 25);
        t1.setBorder(new LineBorder(Color.black,2));
        t1.setForeground(Color.black);
        panelissue.add(t1);

        //setting book id
        bid = new JLabel("BOOK ID");
	    bid.setBounds(152, 320, 200, 24);
        bid.setFont(f);
        bid.setForeground(Color.black);
	    panelissue.add(bid);

        //setting textfield 2
        t2 = new JTextField();
        t2.setEnabled(true);
        t2.setBounds(230, 320, 157, 25);
        t2.setBorder(new LineBorder(Color.black,2));
        t2.setForeground(Color.black);
        panelissue.add(t2);

        //setting date label
        date = new JLabel("ISSUE DATE");
	    date.setBounds(129, 360, 150, 24);
        date.setFont(f);
        date.setForeground(Color.black);
	    panelissue.add(date);

        //settting jformatted textfield
        SqlDateModel model = new SqlDateModel();
        Properties p = new Properties();
        p.put("text.day", "Day");
        p.put("text.month", "Month");
        p.put("text.year", "Year");
        JDatePanelImpl panel = new JDatePanelImpl(model, p);
        datepicker = new JDatePickerImpl(panel, new AbstractFormatter() {

            @Override
            public Object stringToValue(String text) throws ParseException {
                // TODO Auto-generated method stub
                return null;
            }

            @Override
            public String valueToString(Object value) throws ParseException {
                // TODO Auto-generated method stub
                if(value != null) {
                Calendar cal = (Calendar) value;
                SimpleDateFormat format = new SimpleDateFormat("yyyy-mm-dd");
                String strDate = format.format(cal.getTime());
                return strDate;
                }
                return "";
            }
            
        });
        datepicker.setBounds(230, 360, 157, 24);
        datepicker.setFont(f);
        datepicker.setBorder(new LineBorder(Color.black,2));
        datepicker.setForeground(Color.black);
        this.add(datepicker);
        this.pack();
        this.setVisible(true);


        //setting issue book button
        b = new JButton("ISSUE BOOK");
        b.setBounds(177, 430, 150, 40);
        b.setFont(f);
        b.setBackground(c);
        b.setForeground(Color.black);
        b.addActionListener(this);
        panelissue.add(b);

        //setting issue book error label
        l3 = new JLabel();
        l3.setBounds(140, 470, 250, 40);
        l3.setFont(f);
        panelissue.add(l3);

    }
    public void actionPerformed(ActionEvent e) {
        s1 = t1.getText();
        s2 = t2.getText();
        if(e.getSource() == b){
            if((s1.isEmpty() || s2.isEmpty())){
                l3.setBounds(180, 490, 250, 40);
                l3.setForeground(Color.red);
                l3.setText("Please Enter Details!");
            }
            else{
                l3.setBounds(160, 490, 250, 40);
                l3.setForeground(Color.green);
                l3.setText("Book Issued Successfully!");
            }
        }
    }
    public static void main(String[] args){
        IssueBook obj = new IssueBook();
        obj.setVisible(true);
    }
}
