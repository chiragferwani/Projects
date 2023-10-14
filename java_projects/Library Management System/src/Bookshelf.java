import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.border.LineBorder;
import javax.swing.table.DefaultTableCellRenderer;
import javax.swing.table.TableCellRenderer;
public class Bookshelf extends JFrame{
    JPanel panelbook;
    JLabel book, avb;
    JTable t1;
    public Bookshelf(){
        //setting jframe
        setSize(1020, 700);
        setTitle("Library Management System");

         //setting color
        Color c = new Color(245, 245, 245);

        //setting panelhome
        panelbook = new JPanel();
        setContentPane(panelbook);
        panelbook.setLayout(null);
        panelbook.setBackground(c);

        //setting font
        int BOLD = 10;
        Font f = new Font("Roboto", Font.BOLD, 15);
        Font f1 = new Font("Roboto", Font.BOLD, 20);

        //setting image for bookshelf
        book = new JLabel(new ImageIcon(ClassLoader.getSystemResource("book.png")));
        book.setBounds(385, 20, 220, 220);
        panelbook.add(book);

        //setting available books label
        avb = new JLabel("AVAILABLE BOOKS");
	    avb.setBounds(400, 225, 200, 24);
        avb.setFont(f1);
        avb.setForeground(Color.black);
	    panelbook.add(avb);

        //adding table for available books
        String iscolheads[] = {"BOOK ID", "BOOK NAME", "ISSUED ON"};
        String isrowdata[][] = {
            {"BOOK ID", "BOOK NAME", "AVAILABLE"},
             {"7126", "Environmental Studies", "YES"},
             {"8956", "Advance Java", "YES"},
             {"1022", "Complete CSS", "YES"},
             {"4512", "Operating Systems", "NO"},
             {"2125", "Python Programming", "YES"},
             {"4007", "Data Communication", "NO"},
             {"9801", "Optical Fibres", "YES"},
             {"1186", "Coding in C++", "YES"},
             {"3475", "Business Communication", "YES"},
             {"6542", "Data Structures", "NO"},
             {"5522", "Basic Programming", "YES"},
             {"0871", "AI & Data Science", "NO"}
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
        t1.setBounds(215, 265, 550, 325);
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
        t1.setRowHeight(5, 25);
        t1.setRowHeight(6, 25);
        t1.setRowHeight(7, 25);
        t1.setRowHeight(8, 25);
        t1.setRowHeight(9, 25);
        t1.setRowHeight(10, 25);
        t1.setRowHeight(11, 25);
        t1.setRowHeight(12, 25);
        panelbook.add(t1);

    }
    public static void main(String[] args){
        Bookshelf obj = new Bookshelf();
        obj.setVisible(true);
    }
}   
