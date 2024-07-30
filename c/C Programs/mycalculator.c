//  MY CALCUALTOR USING C

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>


// Function Prototype

void calculator_operation();
void addition();
void subtraction();
void multiplication();
void division();
void square_root();
void modulus();
void factorial();
void power();
void natural_logarithm();
void log_a_to_base_b();
void sine();
void cosine();
void tangent();



// Main Function

int main()
{
    int X = 1;
    char calc_oper;

    calculator_operation();

    while(X)
    {
        printf("\n");
        printf("\nEnter the Calculator Operation : ");

        calc_oper = getche();

        switch(calc_oper)
        {
            case '+' : addition();
            break;

            case '-' : subtraction();
            break;

            case '*' : multiplication();
            break;

            case '/' : division();
            break;

            case '!' : factorial();
            break;

            case '?' : modulus();
            break;

            case '$' : square_root();
            break;

            case '^' : power();
            break;

            case 'l' : natural_logarithm();
            break;

            case 'L' : log_a_to_base_b();
            break;

            case 'S' : sine();
            break;

            case 'C' : cosine();
            break;

            case 'T' : tangent();
            break;

            case 'Q' : exit(0);
            break;

            case 'R' : system("cls");
                       calculator_operation(); 

            default : system("cls");

    printf("You have entered unavailable option");
    printf("Below is the list of operations \n\n");

            calculator_operation();

        }

    }
}

// Operation Functions

void calculator_operation()
{
    printf("\n\nBELOW IS THE LIST OF OPERATIONS\n\n");

    printf("Enter + for Addition.\n");
    printf("Enter - for Subtraction.\n");
    printf("Enter * for Multiplication.\n");
    printf("Enter / for Division.\n");
    printf("Enter ! for Factorial.\n");
    printf("Enter ? for Modulus.\n");
    printf("Enter ^ for power.\n");
    printf("Enter $ for square_root.\n");
    printf("Enter l for natural logarithm.\n");
    printf("Enter L for logarithm a to Base b.\n");
    printf("Enter S for Sin.\n");
    printf("Enter C for Cos.\n");
    printf("Enter T for Tan.\n");


    printf("\nEnter Q to Quit.\n");
    printf("Enter R to Clear Screen.\n");
}

void addition()
{
    int n , total = 0 , k = 0 , num;
    printf("\nEnter the Number of Elements You want to Add :");
    scanf("%d",&n);
    printf("\nEnter %d Numbers one by one : \n",n);

    while(k<n)
    {
        scanf("%d",&num);
        total = total + num;
        k = k + 1;
    }
    printf("Sum of %d Numbers = %d " , n , total);

}

void subtraction()
{
    int a , b , c=0;
    printf("\nEnter the First Number :");
    scanf("%d",&a);
    printf("Enter the Second Number :");
    scanf("%d",&b);
    c = a-b;
    printf("\n %d - %d = %d" , a , b , c);

}

void multiplication()
{
    int n , total = 1 , k = 0 , num;
    printf("\nEnter the Number of Elements You want to Multiply :");
    scanf("%d",&n);
    printf("\nEnter %d Numbers one by one : \n",n);

    while(k<n)
    {
        scanf("%d",&num);
        total = total*num;
        k = k + 1;
    }
    printf("\nProduct of %d numbers = %d", n , total);

}

void division()
{
    float a , b , d=0;
    printf("\nEnter the First Number :");
    scanf("%f",&a);
    printf("Enter the Second Number :");
    scanf("%f",&b);
    d = a/b;
    printf("\n %.2f / %.2f = %.2f" , a , b , d);

}

void modulus()
{
    int a, b, e=0; 
    printf("Please enter first number   : "); 
    scanf("%d", &a); 
    printf("Please enter second number  : "); 
    scanf("%d", &b);
    e=a%b;
    printf("\nModulus of entered numbers = %d\n",e);
}

void square_root()
{
    float x , sqr ;

    printf("\nEnter a Number :");
    scanf("%f",&x);

    sqr = sqrt(x);
    printf("\n%.2f is the SquareRoot\n",sqr);
    
    printf(" of the entered number");

}

void factorial()
{
    int i,fact=1,num;

    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);

    if (num<0)
    {
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        
    }               

    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is : %d\n",num,fact);

}

void power()
{
    float a,b, p;
    printf("\nEnter Two numbers to find the Power \n");

    printf("Base: ");
    scanf("%f",&a);

    printf("Exponent : ");
    scanf("%f",&b);

    p=pow(a,b);

    printf("\n%.1f to the power %.1f = %.1f ",a,b,p);
}

void natural_logarithm()
{
    float a,b;

    printf("\nEnter the Value :");
    scanf("%f",&a);

    //log Base (e)
    b = log(a);
    printf("The Natural Logarithm of %f = %f", a,b);

}

void log_a_to_base_b()
{
    float a , b , c;
    
    printf("\nEnter the Number :");
    scanf("%f",&a);

    printf("Enter the Base : ");
    scanf("%f",&b);

    c = log(a)/log(b);

    printf("Log of %.2f to Base %.2f = %f \n" , a , b , c);

}

void sine()
{
    float ang , val;

    printf("\nEnter the Angle in Degrees : ");
    scanf("%f",&ang);

    val = sin(ang*(3.14/180));

    printf("Sine of angle %.2f = %.2f", ang , val);

}

void cosine()
{
    float ang , val;

    printf("\nEnter the Angle in Degrees : ");
    scanf("%f",&ang);

    val = cos(ang*(3.14/180));

    printf("Sine of angle %.2f = %.2f", ang , val);

}

void tangent()
{
    float ang , val;

    printf("\nEnter the Angle in Degrees : ");
    scanf("%f",&ang);

    val = tan(ang*(3.14/180));

    printf("Sine of angle %.2f = %.2f", ang , val);

}