import java.util.Scanner;

class Calc{
    public static void main(String[] a){
        Scanner s = new Scanner(System.in);
        System.out.println("enter num1 ");
        float x = s.nextFloat();
        System.out.println("enter num2 ");
        float y = s.nextFloat();

        float sum,sub,mul,div;

        sum = x+y;
        sub = x-y;
        div = x/y;
        mul = x*y;

        System.out.println("sum is " + sum);
        System.out.println("sub is " + sub);
        System.out.println("div is " + div);
        System.out.println("mul is " + mul);
            }
        }  