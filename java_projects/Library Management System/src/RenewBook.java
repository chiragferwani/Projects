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
public class RenewBook extends JFrame implements ActionListener{
    JPanel panelrenew;
    JLabel rnb, bname, bid, date, l3, dater;
    JTextField t1, t2;
    JDatePickerImpl datepicker;
    JButton b;
    String strDate;
    public RenewBook() {
        //setting jframe
        setSize(520, 580);
        setTitle("Library Management System");

        //setting color
        Color c = new Color(245, 245, 245);

        //setting font
        int BOLD = 10;
        Font f = new Font("Roboto", Font.BOLD, 15);

        //setting panelstudent
        panelrenew = new JPanel();
        setContentPane(panelrenew);
        panelrenew.setLayout(null);
        panelrenew.setBackground(c);

        //setting issue book image
        rnb = new JLabel(new ImageIcon(ClassLoader.getSystemResource("renewbook.png")));
        rnb.setBounds(120, 20, 260, 260);
        panelrenew.add(rnb);

        //setting book name label
        bname = new JLabel("BOOK NAME");
	    bname.setBounds(125, 280, 150, 24);
        bname.setFont(f);
        bname.setForeground(Color.black);
	    panelrenew.add(bname);

        //setting textfield
        t1 = new JTextField();
        t1.setEnabled(true);
        t1.setBounds(230, 280, 157, 25);
        t1.setBorder(new LineBorder(Color.black,2));
        t1.setForeground(Color.black);
        panelrenew.add(t1);

        //setting book id
        bid = new JLabel("BOOK ID");
	    bid.setBounds(152, 320, 200, 24);
        bid.setFont(f);
        bid.setForeground(Color.black);
	    panelrenew.add(bid);

        //setting textfield 2
        t2 = new JTextField();
        t2.setEnabled(true);
        t2.setBounds(230, 320, 157, 25);
        t2.setBorder(new LineBorder(Color.black,2));
        t2.setForeground(Color.black);
        panelrenew.add(t2);

        //setting date label
        date = new JLabel("RENEW DATE");
	    date.setBounds(117, 360, 150, 24);
        date.setFont(f);
        date.setForeground(Color.black);
	    panelrenew.add(date);

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

        //setting date label
        dater = new JLabel("RETURN DATE");
	    dater.setBounds(109, 400, 150, 24);
        dater.setFont(f);
        dater.setForeground(Color.black);
	    panelrenew.add(dater);

        //settting jformatted textfield
        SqlDateModel modeln = new SqlDateModel();
        Properties pn = new Properties();
        p.put("text.day", "Day");
        p.put("text.month", "Month");
        p.put("text.year", "Year");
        JDatePanelImpl paneln = new JDatePanelImpl(modeln, pn);
        datepicker = new JDatePickerImpl(paneln, new AbstractFormatter() {

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
                String strDaten = format.format(cal.getTime());
                return strDaten;
                }
                return "";
            }
            
        });
        datepicker.setBounds(230, 400, 157, 24);
        datepicker.setFont(f);
        datepicker.setBorder(new LineBorder(Color.black,2));
        datepicker.setForeground(Color.black);
        this.add(datepicker);
        this.pack();
        this.setVisible(true);


        //setting issue book button
        b = new JButton("RENEW BOOK");
        b.setBounds(177, 460, 150, 40);
        b.setFont(f);
        b.setBackground(c);
        b.setForeground(Color.black);
        b.addActionListener(this);
        panelrenew.add(b);

        //setting issue book error label
        l3 = new JLabel();
        l3.setBounds(140, 500, 250, 40);
        l3.setFont(f);
        panelrenew.add(l3);
    }
    public void actionPerformed(ActionEvent e) {
        String s1 = t1.getText();
        String s2 = t2.getText();
        if(e.getSource() == b){
            if((s1.isEmpty() || s2.isEmpty())){
                l3.setBounds(180, 530, 250, 40);
                l3.setForeground(Color.red);
                l3.setText("Please Enter Details!");
            }
            else{
                l3.setBounds(155, 530, 250, 40);
                l3.setForeground(Color.green);
                l3.setText("Book Renewed Successfully!");
            }
        }
    }
    public static void main(String[] args) {
        RenewBook obj = new RenewBook();
        obj.setVisible(true);
    }
}
