class entend {
    public static void main(String [] a) {
      Employee emp = new Employee("John", 20, 1000);
      emp.Display();
      Person p = new Person("wio", 201);
      p.Display();
      

    }
  }
  
  class Person {
    String name="John";
    int age=20;
    Person(String n, int a) {
      name=n;
      age=a;
    }
    void Display() {
      System.out.println("Name: "+name);
      System.out.println("Age: "+age);
    }
  }
  
  class Employee extends Person {
    int salary=0;
    
    Employee(String name, int age, int s) {
      super(name, age);
      salary=s;
    }
    void Display() {
      super.Display();
      System.out.println("Salary: "+salary);
    }
  }
  

  
  