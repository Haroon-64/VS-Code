import java.util.Scanner;

class Swap{
    public static void main(String[] a){
        Scanner s = new Scanner(System.in);
        System.out.println("enter num1 ");
        int x = s.nextInt();
        System.out.println("enter num2 ");
        int y = s.nextInt();
        int t = x;
        System.out.println("before swap "+ x + " " + y);
        x = y;
        y = t;
        System.out.println("after swap "+ x + " " + y);

    }
}