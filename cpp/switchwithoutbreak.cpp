#include<iostream>
using namespace std;

string http_error(int status)
{
switch(status)
{
case 400:
    return "a";
case 404:
    return "b";
}
}
int main()
{
    cout<<http_error(400);
    cout<<http_error(404);
}