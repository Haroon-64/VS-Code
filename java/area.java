public class area {
    public static void main(String[] args) {
       area a = new area();
       a.input(10);
       a.calc();
       a.disp();

    }
    private float radius;
    private float area;
    private float circum;

    public void input(float x){
        radius = x;
    }
    public void calc(){
        area = (float)3.141567 * radius * radius;
        circum = (float)2.0 * (float)3.141567 * radius;
    }
    public void disp(){
        System.out.println("circumfrecee is" + circum + " area is " + area);
    }
}



   
