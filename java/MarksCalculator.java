import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class MarksCalculator {

  public static void main(String[] args) {
    JFrame frame = new JFrame("Marks Calculator");
    frame.setSize(450, 400);
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    JLabel label1 = new JLabel("Subject 1:");
    label1.setBounds(10, 10, 100, 25);
    frame.add(label1);

    JTextField subject1Field = new JTextField();
    subject1Field.setBounds(120, 10, 200, 25);
    frame.add(subject1Field);

    JLabel label2 = new JLabel("Subject 2:");
    label2.setBounds(10, 40, 100, 25);
    frame.add(label2);

    JTextField subject2Field = new JTextField();
    subject2Field.setBounds(120, 40, 200, 25);
    frame.add(subject2Field);

    JLabel label3 = new JLabel("Subject 3:");
    label3.setBounds(10, 70, 100, 25);
    frame.add(label3);

    JTextField subject3Field = new JTextField();
    subject3Field.setBounds(120, 70, 200, 25);
    frame.add(subject3Field);

    JLabel label4 = new JLabel("Subject 4:");
    label4.setBounds(10, 100, 100, 25);
    frame.add(label4);

    JTextField subject4Field = new JTextField();
    subject4Field.setBounds(120, 100, 200, 25);
    frame.add(subject4Field);

    JButton calculateButton = new JButton("Calculate Percentage");
    calculateButton.setBounds(10, 130, 310, 25);
    frame.add(calculateButton);

    JLabel resultLabel = new JLabel("");
    resultLabel.setBounds(10, 200, 310, 25);
    frame.add(resultLabel);

    calculateButton.addActionListener(
        new ActionListener() {
          public void actionPerformed(ActionEvent e) {
            String[] marksStr = {
                subject1Field.getText(),
                subject2Field.getText(),
                subject3Field.getText(),
                subject4Field.getText()
            };

            double totalMarks = 0;
            double obtainedMarks = 0;
            
            try {
              for (String markStr : marksStr) {
                if (!markStr.isEmpty()) {
                  double mark = Double.parseDouble(markStr);
                  obtainedMarks += mark;
                  totalMarks += 100;
                }
              }
            double percentage = (obtainedMarks / totalMarks) * 100;
            resultLabel.setText("Percentage = " + percentage);
            } catch (NumberFormatException E) {
              resultLabel.setText("invalid values");
            }  
          }
        });

    frame.setVisible(true);
  }
}
