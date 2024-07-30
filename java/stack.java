
class stack{
    public static void main(String[] a){
        stack s = new stack(10); // instantiating the stack obj.
        s.push(0);
        s.pop();
        s.pop();
    }

    private int top = -1;
    private int st[];
    private int sz = 0;
    stack(int size){
        sz = size;
        st = new int[size];
    }
    void push(int x){
        if (top==sz){
            System.out.println("oveflow");
        }
        else{
        st[++top] = x;
        }

    }
        void pop(){
            if(top==-1){
                System.out.println("underflow");
                
            }
            else{
            System.out.println(st[top--]);
    }}
}
