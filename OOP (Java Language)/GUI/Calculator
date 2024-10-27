package src.Swing.Calculator;

import java.awt.Color;
import java.awt.Cursor;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class MyCalculator implements ActionListener {
    JFrame fr;
    private Font f, f2;
    Cursor cursor;
    JButton bt1, bt2, bt3, bt4, bt5;
    JLabel label1, label2, label3;
    JTextField tx1, tx2, tx3;
    int num1, num2, res = 0;

    public MyCalculator() {
        fr = new JFrame();
        fr.setTitle("CALCULATOR");
        fr.setDefaultCloseOperation(fr.EXIT_ON_CLOSE);
        fr.setSize(270,450);
        fr.setLocationRelativeTo(null);
        fr.setLayout(null);
        fr.getContentPane().setBackground(Color.pink);
        fr.setResizable(false);

        f = new Font("Arial",Font.BOLD, 12);
        cursor = new Cursor(Cursor.HAND_CURSOR);

        // label1 = new JLabel();
        // label1.setText("First Number:");
        // label1.setFont(f);
        // label1.setHorizontalAlignment(JLabel.CENTER);
        // label1.setOpaque(true);
        // label1.setBackground(Color.gray);
        // label1.setBounds(20,20,100,50);

        // label2 = new JLabel();
        // label2.setText("Second Number:");
        // label2.setFont(f);
        // label2.setHorizontalAlignment(JLabel.CENTER);
        // label2.setOpaque(true);
        // label2.setBackground(Color.gray);
        // label2.setBounds(20,80,100,50);

        label3 = new JLabel();
        label3.setText("Result:");
        label3.setFont(f);
        label3.setHorizontalAlignment(JLabel.CENTER);
        label3.setOpaque(true);
        label3.setBackground(Color.LIGHT_GRAY);
        label3.setForeground(Color.black);
        label3.setBounds(20,140,100,50);

        tx1 = new JTextField();
        tx1.setBounds(20,20,210,50);
        tx1.setBackground(Color.WHITE);
        tx1.setHorizontalAlignment(JTextField.CENTER);
        tx1.setFont(f);
        
        tx2 = new JTextField();
        tx2.setBounds(20,80,210,50);
        tx2.setBackground(Color.white);
        tx2.setHorizontalAlignment(JTextField.CENTER);
        tx2.setFont(f);

        tx3 = new JTextField();
        tx3.setBounds(130,140,100,50);
        tx3.setBackground(Color.white);
        tx3.setHorizontalAlignment(JTextField.CENTER);
        tx3.setFont(f);

        bt1 = new JButton();
        bt1.setText("Add(+)");
        bt1.setBounds(20,200,100,50);
        bt1.setFocusable(false);
        bt1.setCursor(cursor);
        bt1.setBackground(Color.cyan);
        bt1.addActionListener(this); //Adding action listener for addition

        bt2 = new JButton();
        bt2.setText("Substract(-)");
        bt2.setBounds(130,200,100,50);
        bt2.setFocusable(false);
        bt2.setCursor(cursor);
        bt2.setBackground(Color.cyan);
        bt2.addActionListener(this);

        bt3 = new JButton();
        bt3.setText("Multiply(*)");
        bt3.setBounds(20,260,100,50);
        bt3.setFocusable(false);
        bt3.setCursor(cursor);
        bt3.setBackground(Color.cyan);
        bt3.addActionListener(this);

        bt4 = new JButton();
        bt4.setText("Divide(/)");
        bt4.setBounds(130,260,100,50);
        bt4.setFocusable(false);
        bt4.setCursor(cursor);
        bt4.setBackground(Color.cyan);
        bt4.addActionListener(this);

        bt5 = new JButton();
        bt5.setText("AC");
        bt5.setBounds(75,320,100,50);
        bt5.setFocusable(false);
        bt4.setCursor(cursor);
        bt5.setBackground(Color.ORANGE);
        bt5.addActionListener(this);

        // fr.add(label1);
        // fr.add(label2);
        fr.add(label3);
        fr.add(tx1);
        fr.add(tx2);
        fr.add(tx3);
        fr.add(bt1);
        fr.add(bt2);
        fr.add(bt3);
        fr.add(bt4);
        fr.add(bt5);


        fr.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {

        if(e.getSource()==bt1) {
            res = Integer.parseInt(tx1.getText()) + Integer.parseInt(tx2.getText());
            String str = String.valueOf(res);
            tx3.setText(str);
        }

        else if(e.getSource()==bt2) {
            res = Integer.parseInt(tx1.getText()) - Integer.parseInt(tx2.getText());
            String str = String.valueOf(res);
            tx3.setText(str);
        }

        else if(e.getSource()==bt3) {
            res = Integer.parseInt(tx1.getText()) * Integer.parseInt(tx2.getText());
            String str = String.valueOf(res);
            tx3.setText(str);
        }

        else if(e.getSource()==bt4) {
            res = Integer.parseInt(tx1.getText()) / Integer.parseInt(tx2.getText());
            String str = String.valueOf(res);
            tx3.setText(str);
        }

        else if(e.getSource()==bt5) {
            tx1.setText(null);
            tx2.setText(null);
            tx3.setText(null);
        }

    }

    public static void main(String[] args) {
        new MyCalculator();
    }
}
