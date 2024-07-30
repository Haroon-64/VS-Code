import java.util.Scanner;
class Fact{
    public static void main(String[] a){
        Scanner s = new Scanner(System.in);
        System.out.println("enter num ");
        int x = s.nextInt();
        int y = 1;

        for(int i=1;i<=x;i++){
            y = y*i;
        }
        System.out.println("factorial is " + y);
}}