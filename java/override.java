class override {
  public static void main(String [] a) {
    Car car = new Car();
    car.start();
  }
}

class Vehicle {
  void start() {
    System.out.print("vehicle started\n");
  }
}

class Car extends Vehicle {
  void start() {
    System.out.print("car started");
  }
}


