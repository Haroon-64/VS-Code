 
abstract class Shape {
     
    abstract double calculateArea();
  }
  
   
  class Rectangle extends Shape {
    private double length;
    private double width;
  
     
    public Rectangle(double length, double width) {
      this.length = length;
      this.width = width;
    }
  
     
    double calculateArea() {
      return length * width;
    }
  }
  
   
  class Triangle extends Shape {
    private double base;
    private double height;
  
     
    public Triangle(double base, double height) {
      this.base = base;
      this.height = height;
    }
  
     
    double calculateArea() {
      return 0.5 * base * height;
    }
  }
  
  class shapes3{
    public static void main(String[] args) {
      Rectangle rectangle = new Rectangle(5.0, 3.0);
      System.out.println("Area of rectangle: " + rectangle.calculateArea());
  
       
      Triangle triangle = new Triangle(5.0, 3.0);
      System.out.println("Area of triangle: " + triangle.calculateArea());
    }
  }