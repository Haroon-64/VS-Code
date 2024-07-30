 
class Animal {
     
    public void move() {
      System.out.println("The animal is moving");
    }
  }
  
   
  class Bird extends Animal {
     
    public void move() {
      System.out.println("The bird is flying");
    }
  }
  
   
  class Fish extends Animal {
     
    public void move() {
      System.out.println("The fish is swimming");
    }
  }


  public class animle {
    public static void main(String[] args) {
      
      Animal animal = new Animal();
      Animal bird = new Bird();
      Animal fish = new Fish();
      animal.move();
      bird.move();
      fish.move();
    }
  }
  
  