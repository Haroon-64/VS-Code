public class propsthread {
    public static void main(String[] args) {
        props p = new props();
        System.out.println(" " + p.getName() + " " + p.getPriority()+ " " + p.threadId() );
        p.setName("chnage");
        System.out.println(p.getName());
    }
}   


class props extends Thread{
    public void run(){
        System.out.println("runinng thread");
    }
}