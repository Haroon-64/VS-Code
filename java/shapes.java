class Shape {
    public double getArea() {
      return 0.0;
    }
  }
  
  class Rectangle extends Shape {
     
     double length;
     double width;
  
     
    public Rectangle(double length, double width) {
      this.length = length;
      this.width = width;
    }
  
     
    public double getArea() {
      return length * width;
    }
  }
  
   
  class Box extends Rectangle {
     
     double height;
  
     
    public Box(double length, double width, double height) {
      super(length, width);
      this.height = height;
    }
  
     
    public double getArea() {
      return 2 * (length * width + length * height + width * height);
    }
  }
  
  public class shapes {
    public static void main(String[] args) {
       
      Shape shape = new Shape();
      System.out.println("Area of shape: " + shape.getArea());
  
       
      Rectangle rectangle = new Rectangle(5.0, 3.0);
      System.out.println("Area of rectangle: " + rectangle.getArea());
  
       
      Box box = new Box(5.0, 3.0, 2.0);
      System.out.println("Surface area of box: " + box.getArea());
    }
  }
  