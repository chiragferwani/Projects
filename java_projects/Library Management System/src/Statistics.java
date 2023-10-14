import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.border.LineBorder;
import javax.swing.table.DefaultTableCellRenderer;
import javax.swing.table.TableCellRenderer;
public class Statistics extends JFrame{
    JPanel panelstat;
    JLabel stat, isb, rnb, rb;
    JTable t1, t2, t3;
    public Statistics() {

        //setting jframe
        setSize(1020, 700);
        setTitle("Library Management System");



         //setting color
        Color c = new Color(245, 245, 245);

        //setting panelhome
        panelstat = new JPanel();
        setContentPane(panelstat);
        panelstat.setLayout(null);
        panelstat.setBackground(c);

        //setting font
        int BOLD = 10;
        Font f = new Font("Roboto", Font.BOLD, 15);
        Font f1 = new Font("Roboto", Font.BOLD, 20);

        //settin image for statistics
        stat = new JLabel(new ImageIcon(ClassLoader.getSystemResource("account.png")));
        stat.setBounds(850, 5, 120, 120);
        panelstat.add(stat);

        //setting issued books label
        isb = new JLabel("ISSUED BOOKS");
	    isb.setBounds(400, 75, 180, 24);
        isb.setFont(f1);
        isb.setForeground(Color.black);
	    panelstat.add(isb);

        //setting issued books table
        String iscolheads[] = {"BOOK ID", "BOOK NAME", "ISSUED ON"};
        String isrowdata[][] = {
            {"BOOK ID", "BOOK NAME", "ISSUED ON"},
             {"7126", "Environmental Studies", "10/10/2023"},
             {"8956", "Advance Java", "12/10/2023"},
             {"1022", "Complete CSS", "8/10/2023"},
             {"4512", "Operating Systems", "11/10/2023"}
         };
        t1 = new JTable(isrowdata, iscolheads){

            DefaultTableCellRenderer renderRight = new DefaultTableCellRenderer();

            {//initializer block
                renderRight.setHorizontalAlignment(SwingConstants.CENTER);
            }

            @Override
            public TableCellRenderer getCellRenderer(int arg0, int arg1) {
                return renderRight;

            }
        };
        t1.setBounds(195, 115, 550, 125);
        t1.setFont(f);
        t1.setAlignmentX(CENTER_ALIGNMENT);
        t1.setAlignmentX(CENTER_ALIGNMENT);
        t1.setBorder(new LineBorder(Color.black,2));
        t1.setForeground(Color.black);
        t1.setBackground(c);
        t1.setRowHeight(0, 25);
        t1.setRowHeight(1, 25);
        t1.setRowHeight(2, 25);
        t1.setRowHeight(3, 25);
        t1.setRowHeight(4, 25);
        panelstat.add(t1);

        //setting renewed books label
        rnb = new JLabel("RENEWED BOOKS");
	    rnb.setBounds(380, 275, 180, 24);
        rnb.setFont(f1);
        rnb.setForeground(Color.black);
	    panelstat.add(rnb);

        //setting renewed books table
        String rncolheads[] = {"BOOK ID", "BOOK NAME", "ISSUED ON"};
        String rnrowdata[][] = {
            {"BOOK ID", "BOOK NAME", "RENEWED ON"},
             {"2125", "Python Programming", "28/09/2023"},
             {"4007", "Data Communication", "20/09/2023"},
         };
        t2 = new JTable(rnrowdata, rncolheads){

            DefaultTableCellRenderer renderRight = new DefaultTableCellRenderer();

            {//initializer block
                renderRight.setHorizontalAlignment(SwingConstants.CENTER);
            }

            @Override
            public TableCellRenderer getCellRenderer(int arg0, int arg1) {
                return renderRight;

            }
        };
        t2.setBounds(185, 315, 570, 75);
        t2.setFont(f);
        t2.setAlignmentX(CENTER_ALIGNMENT);
        t2.setAlignmentX(CENTER_ALIGNMENT);
        t2.setBorder(new LineBorder(Color.black,2));
        t2.setForeground(Color.black);
        t2.setBackground(c);
        t2.setRowHeight(0, 25);
        t2.setRowHeight(1, 25);
        t2.setRowHeight(2, 25);
        panelstat.add(t2);

        //setting returned books label
        rb = new JLabel("RETURNED BOOKS");
	    rb.setBounds(375, 420, 200, 24);
        rb.setFont(f1);
        rb.setForeground(Color.black);
	    panelstat.add(rb);

        //setting returned books table
        String rcolheads[] = {"BOOK ID", "BOOK NAME", "ISSUED ON"};
        String rrowdata[][] = {
            {"BOOK ID", "BOOK NAME", "RETURNED ON"},
             {"6542", "Data Structures", "17/09/2023"},
             {"9801", "Optical Fibres", "20/09/2023"},
             {"1186", "Coding in C++", "18/08/2023"},
             {"3475", "Business Communication", "02/08/2023"},
             {"0871", "AI & Data Science", "20/07/2023"}
         };
        t3 = new JTable(rrowdata, rcolheads){

            DefaultTableCellRenderer renderRight = new DefaultTableCellRenderer();

            {//initializer block
                renderRight.setHorizontalAlignment(SwingConstants.CENTER);
            }

            @Override
            public TableCellRenderer getCellRenderer(int arg0, int arg1) {
                return renderRight;

            }
        };
        t3.setBounds(185, 460, 570, 150);
        t3.setFont(f);
        t3.setAlignmentX(CENTER_ALIGNMENT);
        t3.setAlignmentX(CENTER_ALIGNMENT);
        t3.setBorder(new LineBorder(Color.black,2));
        t3.setForeground(Color.black);
        t3.setBackground(c);
        t3.setRowHeight(0, 25);
        t3.setRowHeight(1, 25);
        t3.setRowHeight(2, 25);
        t3.setRowHeight(3, 25);
        t3.setRowHeight(4, 25);
        t3.setRowHeight(5, 25);
        panelstat.add(t3);

    }
    public static void main(String[] args){
        Statistics obj = new Statistics();
        obj.setVisible(true);
    }
}
