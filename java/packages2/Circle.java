package  cse.iust.shapes;

public class Circle {
    // Private member
    private double radius;
  
    // Protected member
    protected String color;
  
    // Default member
    String type;
  
    // Public member
    public double circumference;
  
    // Constructor
    public Circle(double radius) {
      this.radius = radius;
      this.color = "red";
      this.type = "Circle";
      this.circumference = 2 * Math.PI * radius;
    }
  
    // Public method to access private member
    public double getRadius() {
      return radius;
    }
  }