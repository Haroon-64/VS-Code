//factorial of a number using for loop
#include <iostream>
using namespace std;
int main()
{
    long long int n, fact = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        fact *= i;
    }
    cout << "Factorial of " << n << " = " << fact;    
    return 0;
}
