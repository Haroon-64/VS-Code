import java.util.Scanner;

class Coords{
    public static void main(String[] a){
        Scanner s = new Scanner(System.in);
        System.out.println("enter x coords ");
        int x = s.nextInt();
        System.out.println("enter y coords ");
        int y = s.nextInt();
        if(x>0 && y>0){
            System.out.println("1st Quad");

        }

             else if(x<0 && y<0){
            System.out.println("3rd Quad");

        }
            else if(x>0 && y<0){
            System.out.println("4th Quad");

        }
            else if(x<0 && y>0){
            System.out.println("2nd Quad");

        }
        else{
            System.out.println("ORIGNN");
        }
    }}