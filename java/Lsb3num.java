import java.util.Scanner;

class Lsb3num{
    public static void main(String[] a){
        Scanner s = new Scanner(System.in);
        System.out.println("enter num1 ");
        int x = s.nextInt();if(r1==r2 || r1==r3 || r2=r3){
            System.out.println("True");
        }
        System.out.println("enter num2 ");
        int y = s.nextInt();
        System.out.println("enter num3 ");
        int z = s.nextInt();
        int r1 = x % 1000,r2 = y % 1000,r3 = z % 1000;
 

        if(r1==r2 || r1==r3 || r2==r3){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
    }
}