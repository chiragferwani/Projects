import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.border.LineBorder;
public class Home extends JFrame implements ActionListener {
    JPanel panelhome;
    JLabel logo, notg, norg, org, nandg, andg, xorg, cgate, led, on, out, note, flow;
    JLabel w1, w2, w3, w4, w5, w6, w7, w8, w9, w10, w11;
    JButton not, nor, or, nand, and, xor, ip1, ip2, op, clear;
    public Home() {
        //setting jframe
        setSize(1020, 700);
        setTitle("Quantum Flow");

        //setting color
        Color c = new Color(245, 245, 245);

        //setting panelhome
        panelhome = new JPanel();
        setContentPane(panelhome);
        panelhome.setLayout(null);
        panelhome.setBackground(c);

        //setting font
        int BOLD = 10;
        Font f = new Font("SF Pro Display", Font.BOLD, 15);
        Font f1 = new Font("SF Pro Display", Font.BOLD, 25);
        Font f2 = new Font("SF Pro Display", Font.BOLD, 20);
        Font f3 = new Font("SF Pro Display", Font.BOLD, 16);

        //setting logo image
        logo = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/logo.png")));
        logo.setBounds(25, 20, 75, 100);
        panelhome.add(logo);

        flow = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/flow.png")));
        flow.setBounds(353, 20, 275, 100);
        panelhome.add(flow);

        //setting not gate logo 
        notg = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/not.png")));
        notg.setBounds(140, 130, 100, 100);
        panelhome.add(notg);
     
        //setting not gate button
        not = new JButton("NOT GATE");
        not.setBounds(140, 220, 100, 40);
        not.setFont(f);
        not.setBackground(c);
        not.setForeground(Color.black);
        not.setBorder(new LineBorder(Color.black, 2));
        not.addActionListener(this);
        panelhome.add(not);
    
        //setting OR gate logo 
        org = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/or.png")));
        org.setBounds(140, 275, 100, 100);
        panelhome.add(org);

        //setting OR gate button
        or = new JButton("OR GATE");
        or.setBounds(140, 365, 100, 40);
        or.setFont(f);
        or.setBackground(c);
        or.setForeground(Color.black);
        or.setBorder(new LineBorder(Color.black, 2));
        or.addActionListener(this);
        panelhome.add(or);

        //setting AND gate logo 
        andg = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/and.png")));
        andg.setBounds(140, 420, 100, 100);
        panelhome.add(andg);

        //setting AND gate button
        and = new JButton("AND GATE");
        and.setBounds(140, 510, 100, 40);
        and.setFont(f);
        and.setBackground(c);
        and.setForeground(Color.black);
        and.setBorder(new LineBorder(Color.black, 2));
        and.addActionListener(this);
        panelhome.add(and);

        //setting nor gate logo
        norg = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/nor.png")));
        norg.setBounds(740, 130, 100, 100);
        panelhome.add(norg);
        
        //setting nor gate button
        nor = new JButton("NOR GATE");
        nor.setBounds(740, 220, 100, 40);
        nor.setFont(f);
        nor.setBackground(c);
        nor.setForeground(Color.black);
        nor.setBorder(new LineBorder(Color.black, 2));
        nor.addActionListener(this);
        panelhome.add(nor);

        //setting NAND gate logo 
        nandg = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/nand.png")));
        nandg.setBounds(740, 275, 100, 100);
        panelhome.add(nandg);

        //setting NAND gate button
        nand = new JButton("NAND GATE");
        nand.setBounds(740, 365, 100, 40);
        nand.setFont(f);
        nand.setBackground(c);
        nand.setForeground(Color.black);
        nand.setBorder(new LineBorder(Color.black, 2));
        nand.addActionListener(this);
        panelhome.add(nand);

        //setting XOR gate logo
        xorg = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/xor.png")));
        xorg.setBounds(740, 420, 100, 100);
        panelhome.add(xorg);

        //setting XOR gate button
        xor = new JButton("XOR GATE");
        xor.setBounds(740, 510, 100, 40);
        xor.setFont(f);
        xor.setBackground(c);
        xor.setForeground(Color.black);
        xor.setBorder(new LineBorder(Color.black, 2));
        xor.addActionListener(this);
        panelhome.add(xor);

        //setting button for input1
        ip1 = new JButton("0");
        ip1.setBounds(320, 190, 30, 40);
        ip1.setFont(f1);
        ip1.setBackground(c);
        ip1.setForeground(Color.black);
        ip1.setBorder(new LineBorder(Color.black, 2));
        ip1.addActionListener(this);
        panelhome.add(ip1);

        //setting button for input2
        ip2 = new JButton("0");
        ip2.setBounds(320, 420, 30, 40);
        ip2.setFont(f1);
        ip2.setBackground(c);
        ip2.setForeground(Color.black);
        ip2.setBorder(new LineBorder(Color.black, 2));
        ip2.addActionListener(this);
        panelhome.add(ip2);

        //setting label for line up (wire1)
        w1 = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/lineup.png")));
        w1.setBounds(350, 160, 100, 100);
        panelhome.add(w1);

        //setting label for line up (wire2)
        w2 = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/lineup.png")));
        w2.setBounds(350, 390, 100, 100);
        panelhome.add(w2);

        //setting label for line down (wire3)
        w3 = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/linedown.png")));
        w3.setBounds(400, 207, 100, 100);
        panelhome.add(w3);

        //setting label for line down (wire4)
        w4 = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/linedown.png")));
        w4.setBounds(400, 343, 100, 100);
        panelhome.add(w4);

        //setting label for line horizontal (wire5)
        w5 = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/linehor.png")));
        w5.setBounds(419, 293, 100, 100);
        panelhome.add(w5);

        //setting label for line horizontal (wire6)
        w6 = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/linehor.png")));
        w6.setBounds(419, 258, 100, 100);
        panelhome.add(w6);

        //setting label for box (wire7)
        w7 = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/linedown.png")));
        w7.setBounds(440, 267, 100, 100);
        panelhome.add(w7);

        //setting label for box (wire8)
        w8 = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/lineup.png")));
        w8.setBounds(493, 220, 100, 100);
        panelhome.add(w8);

        //setting label for box (wire9)
        w9 = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/lineup.png")));
        w9.setBounds(487, 320, 100, 100);
        panelhome.add(w9); 
        
        //setting label for box (wire10)
        w10 = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/linedown.png")));
        w10.setBounds(540, 273, 100, 100);
        panelhome.add(w10);

        //set label for choose gate 
        cgate = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/cgate.png")));
        cgate.setBounds(488, 273, 100, 100);
        panelhome.add(cgate);

        //setting wire for LED (wire11)
        w11 = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/linehor.png")));
        w11.setBounds(560, 275, 100, 100);
        panelhome.add(w11);

        //setting image for off led
        led = new JLabel(new ImageIcon(ClassLoader.getSystemResource("images/off2.png")));
        led.setBounds(610, 131, 50, 276);
        panelhome.add(led);

        //setting label for output 
        out = new JLabel("OUTPUT :");
        out.setFont(f2);
        out.setForeground(Color.black);
        out.setBounds(400, 445, 100, 100);
        panelhome.add(out);

        //setting button for output
        op = new JButton("0");
        op.setBounds(500, 470, 35, 35);
        op.setFont(f1);
        op.setBackground(c);
        op.setForeground(Color.black);
        op.setBorder(new LineBorder(Color.black, 2));
        panelhome.add(op);

        //setting label for note box
        note = new JLabel();
        note.setFont(f);
        note.setAlignmentX(CENTER_ALIGNMENT);
        note.setAlignmentY(CENTER_ALIGNMENT);
        note.setForeground(Color.black);
        note.setBounds(280, 560, 420, 40);
        note.setHorizontalAlignment(SwingConstants.CENTER);
        panelhome.add(note);

        //setting clear button
        clear = new JButton("CLEAR INPUT");
        clear.setBounds(392, 515, 148, 30);
        clear.setFont(f3);
        clear.setBackground(c);
        clear.setForeground(Color.black);
        clear.setBorder(new LineBorder(Color.black, 2));
        clear.addActionListener(this);
        panelhome.add(clear);

    }
     public void actionPerformed(ActionEvent e) {
            if(e.getSource() == clear){
                cgate.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/cgate.png")));
                led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/off2.png")));
                note.setText("");
                note.setBorder(null);
                ip2.setEnabled(true);
                ip1.setEnabled(true);
                ip1.setText("0");
                ip2.setText("0");
                op.setText("0");
            }
            if(e.getSource() == not){
                cgate.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/not.png")));
                ip2.setEnabled(false);
                String a = ip1.getText();
                if(a!= ""){
                    if(a == "0"){
                        op.setText("1");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/on2.png")));
                        note.setText("*NOTE: Only 1 Input will be considered for NOT gate.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(a == "1"){
                        op.setText("0");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/off2.png")));
                        note.setText("*NOTE: Only 1 Input will be considered for NOT gate.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                }
            }
            if(e.getSource() == or){
                cgate.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/or.png")));
                ip2.setEnabled(true);
                String a = ip1.getText();
                String b = ip2.getText();
                int x = Integer.parseInt(a);
                int y = Integer.parseInt(b);
                if(a != "" && b != ""){
                    if(x == 0 && y == 0){
                        op.setText("0");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/off2.png")));
                        note.setText("*NOTE: OR Gate: (0+0) = 0.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(x == 0 && y == 1){
                        op.setText("1");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/on2.png")));
                        note.setText("*NOTE: OR Gate: (0+1) = 1.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(x == 1 && y == 0){
                        op.setText("1");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/on2.png")));
                        note.setText("*NOTE: OR Gate: (1+0) = 1.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(x == 1 && y == 1){
                        op.setText("1");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/on2.png")));
                        note.setText("*NOTE: OR Gate: (1+1) = 1.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                }
            }
            if(e.getSource() == and){
                cgate.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/and.png")));
                ip2.setEnabled(true);
                String a = ip1.getText();
                String b = ip2.getText();
                int x = Integer.parseInt(a);
                int y = Integer.parseInt(b);
                if(a != "" && b != ""){
                    if(x == 0 && y == 0){
                        op.setText("0");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/off2.png")));
                        note.setText("*NOTE: AND Gate: (0x0) = 0.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(x == 0 && y == 1){
                        op.setText("0");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/off2.png")));
                        note.setText("*NOTE: AND Gate: (0x1) = 0.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(x == 1 && y == 0){
                        op.setText("0");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/off2.png")));
                        note.setText("*NOTE: AND Gate: (1x0) = 0.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(x == 1 && y == 1){
                        op.setText("1");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/on2.png")));
                        note.setText("*NOTE: AND Gate: (1x1) = 1.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                }
            }
            if(e.getSource() == nor){
                cgate.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/nor.png")));
                ip2.setEnabled(true);
                String a = ip1.getText();
                String b = ip2.getText();
                int x = Integer.parseInt(a);
                int y = Integer.parseInt(b);
                if(a != "" && b != ""){
                    if(x == 0 && y == 0){
                        op.setText("1");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/on2.png")));
                        note.setText("*NOTE: NOR Gate: (0 NOR 0) = 0.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(x == 0 && y == 1){
                        op.setText("0");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/off2.png")));
                        note.setText("*NOTE: NOR Gate: (0 NOR 1) = 0.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(x == 1 && y == 0){
                        op.setText("0");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/off2.png")));
                        note.setText("*NOTE: NOR Gate: (1 NOR 0) = 0.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(x == 1 && y == 1){
                        op.setText("0");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/off2.png")));
                        note.setText("*NOTE: NOR Gate: (1 NOR 1) = 0.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                }
            }
            if(e.getSource() == nand){
                cgate.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/nand.png")));
                ip2.setEnabled(true);
                String a = ip1.getText();
                String b = ip2.getText();
                int x = Integer.parseInt(a);
                int y = Integer.parseInt(b);
                if(a != "" && b != ""){
                    if(x == 0 && y == 0){
                        op.setText("1");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/on2.png")));
                        note.setText("*NOTE: NAND Gate: (0 NAND 0) = 0.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(x == 0 && y == 1){
                        op.setText("1");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/on2.png")));
                        note.setText("*NOTE: NAND Gate: (0 NAND 1) = 1.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(x == 1 && y == 0){
                        op.setText("1");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/on2.png")));
                        note.setText("*NOTE: NAND Gate: (1 NAND 0) = 1.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(x == 1 && y == 1){
                        op.setText("0");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/off2.png")));
                        note.setText("*NOTE: NAND Gate: (1 NAND 1) = 1.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                }
            }
            if(e.getSource() == xor){
                cgate.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/xor.png")));
                ip2.setEnabled(true);
                String a = ip1.getText();
                String b = ip2.getText();
                int x = Integer.parseInt(a);
                int y = Integer.parseInt(b);
                if(a != "" && b != ""){
                    if(x == 0 && y == 0){
                        op.setText("0");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/off2.png")));
                        note.setText("*NOTE: XOR Gate: (0 XOR 0) = 0.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(x == 0 && y == 1){
                        op.setText("1");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/on2.png")));
                        note.setText("*NOTE: XOR Gate: (0 XOR 1) = 1.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(x == 1 && y == 0){
                        op.setText("1");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/on2.png")));
                        note.setText("*NOTE: XOR Gate: (1 XOR 0) = 1.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                    if(x == 1 && y == 1){
                        op.setText("0");
                        led.setIcon(new ImageIcon(ClassLoader.getSystemResource("images/off2.png")));
                        note.setText("*NOTE: XOR Gate: (1 XOR 1) = 1.");
                        note.setBorder(new LineBorder(Color.black, 2));
                    }
                }
            }
            if(e.getSource() == ip1){
                String s = ip1.getText();
                if(s.equals("0")){
                ip1.setText("1");
                }
                if(s.equals("1")){
                    ip1.setText("0");
                }
            }
            if(e.getSource() == ip2){
                String s = ip2.getText();
                if(s.equals("0")){
                ip2.setText("1");
                }
                if(s.equals("1")){
                    ip2.setText("0");
                }
            }
        }
    public static void main(String[] args){
        Home obj = new Home();
        obj.setDefaultCloseOperation(EXIT_ON_CLOSE);
        obj.setTitle("Quantum Flow");
        obj.setVisible(true);
    }
}