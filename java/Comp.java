import java.util.Scanner;

class Comp{
    public static void main(String[] a){
        Scanner s = new Scanner(System.in);
        System.out.println("enter num1 ");
        int x = s.nextInt();
        System.out.println("enter num2 ");
        int y = s.nextInt();
        
        if(x>y){
            System.out.println("x is greater");
        }
        else if(x==y){
            System.out.println("same");
        }
        else{
            System.out.println("y greater");
        }

    }
}