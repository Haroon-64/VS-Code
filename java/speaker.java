class Person {
    void speak() {
      System.out.println("The person is speaking");
    }
  }
  
  class Student extends Person {
    void speak() {
      System.out.println("The student is asking a question");
    }
  }
  
  class Teacher extends Person {
    void speak() {
      System.out.println("The teacher is giving a lecture");
    }
  }
  
  public class speaker {
    public static void main(String[] args) {
      Person person = new Person();
      person.speak();
  
      Student student = new Student();
      student.speak();
  
      Teacher teacher = new Teacher();
      teacher.speak();
    }
  }
  