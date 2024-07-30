 
class Vehicle {
     
    public void drive() {
      System.out.println("Driving a vehicle");
    }
  }
  
   
  class Car extends Vehicle {
     
    public void drive() {
      System.out.println("Driving a car");
    }
  }
  
   
  class Bike extends Vehicle {
     
    public void drive() {
      System.out.println("Driving a bike");
    }
  }

  public class carr2 {
    public static void main(String[] args) {

      Vehicle vehicle = new Vehicle();
      Vehicle car = new Car();
      Vehicle bike = new Bike();
      vehicle.drive();
      car.drive();
      bike.drive();

    }
  }
  