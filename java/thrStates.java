import java.lang.Thread.State;

public class thrStates {
    public static void main(String[] args) {
        
        states s = new states();
        states s2 = new states();
        s2.setPriority(1);
        System.out.println(
            Thread.currentThread().getState()+ " priority is  " +s.getPriority()
        );
        s.run(Thread.currentThread().getState());
        System.out.println(s2.getState());
        s2.run(Thread.currentThread().getState());

        try {
            s.sleep(2000);
            System.out.println(Thread.currentThread().getState());
            
        } catch (InterruptedException e) {
            System.out.println("some exception");
        }
        System.out.println("state after "+ Thread.currentThread().getState());
        // after a = new after(s.getState());

    }
}

// class after{
//     public after(State s){
//         System.out.println(s);
//     }
// }

class states extends Thread{
    public void run(State x){
        
        System.out.println("inside thread: state is " +x);
        try {
            sleep(2000);
        } catch (InterruptedException e) {
            System.out.println("some exception");
        }
    }

}