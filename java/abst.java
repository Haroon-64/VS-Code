class abst{
    public static void main(String [] a) {
        Shape s = new Rectangle(10,20);
        System.out.println(s.getarea());

    }

}

abstract class Shape{

    abstract float getarea();
}

class Rectangle extends Shape{
    int length;
    int breadth;
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
        
    float getarea(){
        return (float)(length*breadth);
    }

}