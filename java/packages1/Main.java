package cse.iust.main;
import cse.iust.math.Calculator;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    Calculator calculator = new Calculator();

    System.out.print("Enter first number: ");
    double num1 = sc.nextDouble();

    System.out.print("Enter second number: ");
    double num2 = sc.nextDouble();

    System.out.println("Choose an operation: +, -, *, /");
    int operation = sc.nextInt();

    double result = 0;

    switch (operation) {
      case 1:
        result = calculator.add(num1, num2);
        break;
      case 2:
        result = calculator.subtract(num1, num2);
        break;
      case 3:
        result = calculator.multiply(num1, num2);
        break;
      case 4:
        result = calculator.divide(num1, num2);
      System.out.println("Result: " + result);
      sc.close();
  }
}
}
