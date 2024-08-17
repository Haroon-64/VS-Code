public class thread4calc {
    public static void main(String[] args) {
        new Add().run(2,3);
        new Sub().run(2,3);
        new Mul().run(2,3);
        new Div().run(2,3);
    }
}


class Add extends Thread{
    public void run(int a,int b){
        System.out.println("sum is " + (a+b));
    }
}

class Sub extends Thread{
    public void run(int a,int b){
        System.out.println("diff is " + (a-b));
    }
}

class Mul extends Thread{
    public void run(int a,int b){
        System.out.println("prod is " + (a*b));
    }
}

class Div extends Thread{
    public void run(int a,int b){
        System.out.println("div is " + (a/b));
    }
}