import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class EvList {
  public static void main(String[] args) {
    Frame frame = new Frame("Login App");
    Label userLabel = new Label("Username:");
    userLabel.setBounds(50, 50, 80, 30);
    TextField userText = new TextField();
    userText.setBounds(150, 50, 150, 30);

    Label passLabel = new Label("Password:");
    passLabel.setBounds(50, 100, 80, 30);
    TextField passText = new TextField();
    passText.setEchoChar('*');
    passText.setBounds(150, 100, 150, 30);

    Label resultLabel = new Label();
    resultLabel.setBounds(50, 200, 250, 30);

    Button loginButton = new Button("Login");
    loginButton.setBounds(150, 150, 80, 30);
    loginButton.addActionListener(new ActionListener() {
      @Override
      public void actionPerformed(ActionEvent e) {
        String username = userText.getText();
        String password = passText.getText();

      
        if ("iust".equals(username) && "cse".equals(password)) {
          resultLabel.setText("Valid");
        } else {
          resultLabel.setText("Invalid");
        }
      }
    });

    frame.add(userLabel);
    frame.add(userText);
    frame.add(passLabel);
    frame.add(passText);
    frame.add(loginButton);
    frame.add(resultLabel);

    frame.setSize(400, 300);

    frame.setVisible(true);
  }
}
