class Vehicle {
    public void start() {
      System.out.println("Vehicle started");
    }
  }
  
  class Car extends Vehicle {
    public void drive() {
      System.out.println("Car driving");
    }
  }
  
  class SportsCar extends Car {
    @Override
    public void drive() {
      System.out.println("Sports car driving fast");
    }
  }
  
  public class carr {
    public static void main(String[] args) {
      Vehicle vehicle = new Vehicle();
      vehicle.start();
  
      Car car = new Car();
      car.start();
      car.drive();
  
      SportsCar sportsCar = new SportsCar();
      sportsCar.start();
      sportsCar.drive();
    }
  }
  