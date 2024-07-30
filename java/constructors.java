class constructors{
    int num1;
    
    constructors(){                                          //default constructor
        this.num = 1;                               
    }
    constructors(int num){       //parameterized constructor
        this.num = num;                               
                               
    }
    double calculate(){
        return (double)(num*num);
    }
}

class constructors{
    public static void main(String[] args) {
        MyClass user = new MyClass();                           //calls default constructor
        MyClass para = new MyClass(25);       //calls parameterized constructor
        System.out.println("'user: '" + user.calculate());
        System.out.println("'para: '" + para.calculate());
    }
}