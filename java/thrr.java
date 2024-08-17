class t extends Thread{
    public void run(){
        System.out.println("from thread");
    }
}


class im implements Runnable  {
    public void run(){
        System.out.println("from runnable");
    }
    
}

public class thrr {
    public static void main(String[] args) {
        new t().run();
        new im().run();
    }
    
}