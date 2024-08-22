/**This program calculates the semester grade point average.
*@author Munawar Ali Parray. 
*@author B-Tech CSE 6th semester. Islamic University of Science and Technology.
*@author ali.munawar66@gmail.com
*@version 5.0
*/
import java.text.NumberFormat;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JButton;
import javax.swing.JOptionPane;
import java.awt.Container;
import java.awt.GridLayout;
//import java.awt.Toolkit;
//import java.awt.Dimension;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class gradePointAvg extends JFrame
{
private static final int width=600,height=400;
private JLabel totalCredit, grade,sgpa,creditPoints,sno,sno1,sno2,sno3,sno4,sno5,sno6,sno7,sno8,sno9,sno10;
private JTextField sgpaTextField,credit;
private JTextField creditField1,creditField2,creditField3,creditField4,creditField5,creditField6,creditField7,creditField8,creditField9,creditField10; 
private JTextField gradeField1,gradeField2,gradeField3,gradeField4,gradeField5,gradeField6,gradeField7,gradeField8,gradeField9,gradeField10;
private JButton calculateB,clearB;
private calculateButtonHandler calculatebHandler;
private clearButtonHandler clearbHandler;
public gradePointAvg()
{
setTitle("SGPA CALCULATOR");
setSize(width,height);
Container pane=getContentPane();
GridLayout ag=new GridLayout(13,3);
pane.setLayout(ag);
totalCredit=new JLabel("Total Credit Points:");
grade=new JLabel("Grade Secured");
sgpa=new JLabel("SGPA scored is:");
sno=new JLabel("Serial Number");
sno1=new JLabel("Subject 1");
sno2=new JLabel("Subject 2");
sno3=new JLabel("Subject 3");
sno4=new JLabel("Subject 4");
sno5=new JLabel("Subject 5");
sno6=new JLabel("Subject 6");
sno7=new JLabel("Subject 7");
sno8=new JLabel("Subject 8");
sno9=new JLabel("Subject 9");
sno10=new JLabel("Subject 10");
creditPoints=new JLabel("Credit Points");
credit=new JTextField(10);
gradeField1=new JTextField(10);
creditField1=new JTextField(10);
gradeField2=new JTextField(10);
creditField2=new JTextField(10);
gradeField3=new JTextField(10);
creditField3=new JTextField(10);
gradeField4=new JTextField(10);
creditField4=new JTextField(10);
gradeField5=new JTextField(10);
creditField5=new JTextField(10);
gradeField6=new JTextField(10);
creditField6=new JTextField(10);
gradeField7=new JTextField(10);
creditField7=new JTextField(10);
gradeField8=new JTextField(10);
creditField8=new JTextField(10);
gradeField9=new JTextField(10);
creditField9=new JTextField(10);
gradeField10=new JTextField(10);
creditField10=new JTextField(10);
sgpaTextField=new JTextField(10);
calculateB=new JButton("calculate");
calculatebHandler= new calculateButtonHandler();
calculateB.addActionListener(calculatebHandler);
clearB=new JButton("Clear");
clearbHandler=new clearButtonHandler();
clearB.addActionListener(clearbHandler);
pane.add(sno);
pane.add(grade);
pane.add(creditPoints);
pane.add(sno1);
pane.add(gradeField1);
pane.add(creditField1);
pane.add(sno2);
pane.add(gradeField2);
pane.add(creditField2);
pane.add(sno3);
pane.add(gradeField3);
pane.add(creditField3);
pane.add(sno4);
pane.add(gradeField4);
pane.add(creditField4);
pane.add(sno5);
pane.add(gradeField5);
pane.add(creditField5);
pane.add(sno6);
pane.add(gradeField6);
pane.add(creditField6);
pane.add(sno7);
pane.add(gradeField7);
pane.add(creditField7);
pane.add(sno8);
pane.add(gradeField8);
pane.add(creditField8);
pane.add(sno9);
pane.add(gradeField9);
pane.add(creditField9);
pane.add(sno10);
pane.add(gradeField10);
pane.add(creditField10);
pane.add(sgpa);
pane.add(sgpaTextField);
pane.add(calculateB);
pane.add(totalCredit);
pane.add(credit);
pane.add(clearB);
}
private class clearButtonHandler implements ActionListener
{
public void actionPerformed(ActionEvent c)
{
String set="";
credit.setText(set);
creditField1.setText(set);
creditField2.setText(set);
creditField3.setText(set);
creditField4.setText(set);
creditField5.setText(set);
creditField6.setText(set);
creditField7.setText(set);
creditField8.setText(set);
creditField9.setText(set);
creditField10.setText(set);
gradeField1.setText(set);
gradeField2.setText(set);
gradeField3.setText(set);
gradeField4.setText(set);
gradeField5.setText(set);
gradeField6.setText(set);
gradeField7.setText(set);
gradeField8.setText(set);
gradeField9.setText(set);
gradeField10.setText(set);
sgpaTextField.setText(set);
}
}

private class calculateButtonHandler implements ActionListener
{
public void actionPerformed(ActionEvent e)
{
String credit1str=creditField1.getText();
String grade1str=gradeField1.getText();
String credit2str=creditField2.getText();
String grade2str=gradeField2.getText();
String credit3str=creditField3.getText();
String grade3str=gradeField3.getText();
String credit4str=creditField4.getText();
String grade4str=gradeField4.getText();
String credit5str=creditField5.getText();
String grade5str=gradeField5.getText();
String credit6str=creditField6.getText();
String grade6str=gradeField6.getText();
String credit7str=creditField7.getText();
String grade7str=gradeField7.getText();
String credit8str=creditField8.getText();
String grade8str=gradeField8.getText();
String credit9str=creditField9.getText();
String grade9str=gradeField9.getText();
String credit10str=creditField10.getText();
String grade10str=gradeField10.getText();
double tep[]={Double.parseDouble(credit1str),Double.parseDouble(credit2str),Double.parseDouble(credit3str),Double.parseDouble(credit4str),Double.parseDouble(credit5str),Double.parseDouble(credit6str),Double.parseDouble(credit7str),Double.parseDouble(credit8str),Double.parseDouble(credit9str),Double.parseDouble(credit10str),};
//double temp1=Double.parseDouble(credit1str);
//double temp2=Double.parseDouble(credit2str);
//double temp3=Double.parseDouble(credit3str);
//double temp4=Double.parseDouble(credit4str);
//double temp5=Double.parseDouble(credit5str);
//double temp6=Double.parseDouble(credit6str);
//double temp7=Double.parseDouble(credit7str);
//double temp8=Double.parseDouble(credit8str);
//double temp9=Double.parseDouble(credit9str);
//double temp10=Double.parseDouble(credit10str);
double tem=tep[0]+tep[1]+tep[2]+tep[3]+tep[4]+tep[5]+tep[6]+tep[7]+tep[8]+tep[9];
double ac=0;
String A1="A+";
String A2="A";
String A3="A-";
String B1="B+";
String B2="B";
String B3="B-";
String C1="C+";
String C2="C";
String C3="C-";
String D1="D+";
String D2="D";
String D3="D-";
String F="F";
for(int j=0;j<tep.length;j++)
{
if(j==0)
{
if(A1.equalsIgnoreCase(grade1str))
{
ac=ac+tep[0]*9.5;
}
else if(A2.equalsIgnoreCase(grade1str))
{
ac=ac+tep[0]*9.0;
}
else if(A3.equalsIgnoreCase(grade1str))
{
ac=ac+tep[0]*8.5;
}
else if(B1.equalsIgnoreCase(grade1str))
{
ac=ac+tep[0]*8.0;
}
else if(B2.equalsIgnoreCase(grade1str))
{
ac=ac+tep[0]*7.5;
}
else if(B3.equalsIgnoreCase(grade1str))
ac=ac+tep[0]*7.0;
else if(C1.equalsIgnoreCase(grade1str))
ac=ac+tep[0]*6.5;
else if(C2.equalsIgnoreCase(grade1str))
ac=ac+tep[0]*6.0;
else if(C3.equalsIgnoreCase(grade1str))
ac=ac+tep[0]*5.5;
else if(D1.equalsIgnoreCase(grade1str))
ac=ac+tep[0]*5.0;
else if(D2.equalsIgnoreCase(grade1str))
ac=ac+tep[0]*4.5;
else if(F.equalsIgnoreCase(grade1str));
}
if(j==1)
{
if(A1.equalsIgnoreCase(grade2str))
ac=ac+tep[1]*9.5;
else if(A2.equalsIgnoreCase(grade2str))
ac=ac+tep[1]*9.0;
else if(A3.equalsIgnoreCase(grade2str))
ac=ac+tep[1]*8.5;
else if(B1.equalsIgnoreCase(grade2str))
ac=ac+tep[1]*8.0;
else if(B2.equalsIgnoreCase(grade2str))
ac=ac+tep[1]*7.5;
else if(B3.equalsIgnoreCase(grade2str))
ac=ac+tep[1]*7.0;
else if(C1.equalsIgnoreCase(grade2str))
ac=ac+tep[1]*6.5;
else if(C2.equalsIgnoreCase(grade2str))
ac=ac+tep[1]*6.0;
else if(C3.equalsIgnoreCase(grade2str))
ac=ac+tep[1]*5.5;
else if(D1.equalsIgnoreCase(grade2str))
ac=ac+tep[1]*5.0;
else if(D2.equalsIgnoreCase(grade2str))
ac=ac+tep[1]*4.5;
else if(F.equalsIgnoreCase(grade2str));
}
if(j==2)
{
if(A1.equalsIgnoreCase(grade3str))
ac=ac+tep[2]*9.5;
else if(A2.equalsIgnoreCase(grade3str))
ac=ac+tep[2]*9.0;
else if(A3.equalsIgnoreCase(grade3str))
ac=ac+tep[2]*8.5;
else if(B1.equalsIgnoreCase(grade3str))
ac=ac+tep[2]*8.0;
else if(B2.equalsIgnoreCase(grade3str))
ac=ac+tep[2]*7.5;
else if(B3.equalsIgnoreCase(grade3str))
ac=ac+tep[2]*7.0;
else if(C1.equalsIgnoreCase(grade3str))
ac=ac+tep[2]*6.5;
else if(C2.equalsIgnoreCase(grade3str))
ac=ac+tep[2]*6.0;
else if(C3.equalsIgnoreCase(grade3str))
ac=ac+tep[2]*5.5;
else if(D1.equalsIgnoreCase(grade3str))
ac=ac+tep[2]*5.0;
else if(D2.equalsIgnoreCase(grade3str))
ac=ac+tep[2]*4.5;
else if(F.equalsIgnoreCase(grade3str));
}
if(j==3)
{
if(A1.equalsIgnoreCase(grade4str))
ac=ac+tep[3]*9.5;
else if(A2.equalsIgnoreCase(grade4str))
ac=ac+tep[3]*9.0;
else if(A3.equalsIgnoreCase(grade4str))
ac=ac+tep[3]*8.5;
else if(B1.equalsIgnoreCase(grade4str))
ac=ac+tep[3]*8.0;
else if(B2.equalsIgnoreCase(grade4str))
ac=ac+tep[3]*7.5;
else if(B3.equalsIgnoreCase(grade4str))
ac=ac+tep[3]*7.0;
else if(C1.equalsIgnoreCase(grade4str))
ac=ac+tep[3]*6.5;
else if(C2.equalsIgnoreCase(grade4str))
ac=ac+tep[3]*6.0;
else if(C3.equalsIgnoreCase(grade4str))
ac=ac+tep[3]*5.5;
else if(D1.equalsIgnoreCase(grade4str))
ac=ac+tep[3]*5.0;
else if(D2.equalsIgnoreCase(grade4str))
ac=ac+tep[3]*4.5;
else if(F.equalsIgnoreCase(grade4str));
}
if(j==4)
{
if(A1.equalsIgnoreCase(grade5str))
ac=ac+tep[4]*9.5;
else if(A2.equalsIgnoreCase(grade5str))
ac=ac+tep[4]*9.0;
else if(A3.equalsIgnoreCase(grade5str))
ac=ac+tep[4]*8.5;
else if(B1.equalsIgnoreCase(grade5str))
ac=ac+tep[4]*8.0;
else if(B2.equalsIgnoreCase(grade5str))
ac=ac+tep[4]*7.5;
else if(B3.equalsIgnoreCase(grade5str))
ac=ac+tep[4]*7.0;
else if(C1.equalsIgnoreCase(grade5str))
ac=ac+tep[4]*6.5;
else if(C2.equalsIgnoreCase(grade5str))
ac=ac+tep[4]*6.0;
else if(C3.equalsIgnoreCase(grade5str))
ac=ac+tep[4]*5.5;
else if(D1.equalsIgnoreCase(grade5str))
ac=ac+tep[4]*5.0;
else if(D2.equalsIgnoreCase(grade5str))
ac=ac+tep[4]*4.5;
else if(F.equalsIgnoreCase(grade5str));
}
if(j==5)
{
if(A1.equalsIgnoreCase(grade6str))
ac=ac+tep[5]*9.5;
else if(A2.equalsIgnoreCase(grade6str))
ac=ac+tep[5]*9.0;
else if(A3.equalsIgnoreCase(grade6str))
ac=ac+tep[5]*8.5;
else if(B1.equalsIgnoreCase(grade6str))
ac=ac+tep[5]*8.0;
else if(B2.equalsIgnoreCase(grade6str))
ac=ac+tep[5]*7.5;
else if(B3.equalsIgnoreCase(grade6str))
ac=ac+tep[5]*7.0;
else if(C1.equalsIgnoreCase(grade6str))
ac=ac+tep[5]*6.5;
else if(C2.equalsIgnoreCase(grade6str))
ac=ac+tep[5]*6.0;
else if(C3.equalsIgnoreCase(grade6str))
ac=ac+tep[5]*5.5;
else if(D1.equalsIgnoreCase(grade6str))
ac=ac+tep[5]*5.0;
else if(D2.equalsIgnoreCase(grade6str))
ac=ac+tep[5]*4.5;
else if(F.equalsIgnoreCase(grade6str));
}
if(j==6)
{
if(A1.equalsIgnoreCase(grade7str))
ac=ac+tep[6]*9.5;
else if(A2.equalsIgnoreCase(grade7str))
ac=ac+tep[6]*9.0;
else if(A3.equalsIgnoreCase(grade7str))
ac=ac+tep[6]*8.5;
else if(B1.equalsIgnoreCase(grade7str))
ac=ac+tep[6]*8.0;
else if(B2.equalsIgnoreCase(grade7str))
ac=ac+tep[6]*7.5;
else if(B3.equalsIgnoreCase(grade7str))
ac=ac+tep[6]*7.0;
else if(C1.equalsIgnoreCase(grade7str))
ac=ac+tep[6]*6.5;
else if(C2.equalsIgnoreCase(grade7str))
ac=ac+tep[6]*6.0;
else if(C3.equalsIgnoreCase(grade7str))
ac=ac+tep[6]*5.5;
else if(D1.equalsIgnoreCase(grade7str))
ac=ac+tep[6]*5.0;
else if(D2.equalsIgnoreCase(grade7str))
ac=ac+tep[6]*4.5;
else if(F.equalsIgnoreCase(grade7str)){};
}
if(j==7)
{
if(A1.equalsIgnoreCase(grade8str))
ac=ac+tep[7]*9.5;
else if(A2.equalsIgnoreCase(grade8str))
ac=ac+tep[7]*9.0;
else if(A3.equalsIgnoreCase(grade8str))
ac=ac+tep[7]*8.5;
else if(B1.equalsIgnoreCase(grade8str))
ac=ac+tep[7]*8.0;
else if(B2.equalsIgnoreCase(grade8str))
ac=ac+tep[7]*7.5;
else if(B3.equalsIgnoreCase(grade8str))
ac=ac+tep[7]*7.0;
else if(C1.equalsIgnoreCase(grade8str))
ac=ac+tep[7]*6.5;
else if(C2.equalsIgnoreCase(grade8str))
ac=ac+tep[7]*6.0;
else if(C3.equalsIgnoreCase(grade8str))
ac=ac+tep[7]*5.5;
else if(D1.equalsIgnoreCase(grade8str))
ac=ac+tep[7]*5.0;
else if(D2.equalsIgnoreCase(grade8str))
ac=ac+tep[7]*4.5;
else if(F.equalsIgnoreCase(grade8str)){};
}
if(j==8)
{
if(A1.equalsIgnoreCase(grade9str))
ac=ac+tep[8]*9.5;
else if(A2.equalsIgnoreCase(grade9str))
ac=ac+tep[8]*9.0;
else if(A3.equalsIgnoreCase(grade9str))
ac=ac+tep[8]*8.5;
else if(B1.equalsIgnoreCase(grade9str))
ac=ac+tep[8]*8.0;
else if(B2.equalsIgnoreCase(grade9str))
ac=ac+tep[8]*7.5;
else if(B3.equalsIgnoreCase(grade9str))
ac=ac+tep[8]*7.0;
else if(C1.equalsIgnoreCase(grade9str))
ac=ac+tep[8]*6.5;
else if(C2.equalsIgnoreCase(grade9str))
ac=ac+tep[8]*6.0;
else if(C3.equalsIgnoreCase(grade9str))
ac=ac+tep[8]*5.5;
else if(D1.equalsIgnoreCase(grade9str))
ac=ac+tep[8]*5.0;
else if(D2.equalsIgnoreCase(grade9str))
ac=ac+tep[8]*4.5;
else if(F.equalsIgnoreCase(grade9str)){};
}
if(j==9)
{
if(A1.equalsIgnoreCase(grade10str))
ac=ac+tep[9]*9.5;
else if(A2.equalsIgnoreCase(grade10str))
ac=ac+tep[9]*9.0;
else if(A3.equalsIgnoreCase(grade10str))
ac=ac+tep[9]*8.5;
else if(B1.equalsIgnoreCase(grade10str))
ac=ac+tep[9]*8.0;
else if(B2.equalsIgnoreCase(grade10str))
ac=ac+tep[9]*7.5;
else if(B3.equalsIgnoreCase(grade10str))
ac=ac+tep[9]*7.0;
else if(C1.equalsIgnoreCase(grade10str))
ac=ac+tep[9]*6.5;
else if(C2.equalsIgnoreCase(grade10str))
ac=ac+tep[9]*6.0;
else if(C3.equalsIgnoreCase(grade10str))
ac=ac+tep[9]*5.5;
else if(D1.equalsIgnoreCase(grade10str))
ac=ac+tep[9]*5.0;
else if(D2.equalsIgnoreCase(grade10str))
ac=ac+tep[9]*4.5;
else if(F.equalsIgnoreCase(grade10str)){};

}
}
double result=ac/tem;
NumberFormat num=NumberFormat.getNumberInstance();
num.setMaximumFractionDigits(2);

String resultstr=num.format(result);//Double.toString(result);
String temstr=Double.toString(tem);
sgpaTextField.setText(resultstr);
credit.setText(temstr);
}
}
public static void main(String[] args)
{
JFrame agradePointAvg= new gradePointAvg();
agradePointAvg.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
agradePointAvg.setVisible(true); 
}
}
