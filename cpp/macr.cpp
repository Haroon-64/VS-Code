//macros
#include <iostream>
using namespace std;
#define PI 3.14159
#define NEWLINE '\n'
#define wait cin.get()
#define print(x) cout << x << endl

/*
#if debug == 1    // debug to be defined in compiler
#define print(x) cout << x << endl
#else
#define print(x)
remove logging in release mode
*/

int main()
{
    double r = 5.0;
    double circle;

    circle = 2 * PI * r;
    print(circle);
    cout << NEWLINE;
    wait;

}