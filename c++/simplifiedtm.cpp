#include<iostream>
#include<chrono>

using  namespace std;

struct timer{
    chrono::time_point<chrono::high_resolution_clock> start, end;
    chrono::duration<double> duration;
    timer(){
        start = chrono::high_resolution_clock::now();
        }
    ~timer(){
        end = chrono::high_resolution_clock::now();
        duration = end - start;
        cout << "Duration: " << duration.count() *1000<< "ms" << endl;
    }};

void pr()
{
    timer t;
    int i;
    for(i=0;i<100000;i++)
    {
    if(i%1000==0)
    {
        cout<<i<<"\n";  //  \n is faster than endl
    }
    }
}


    int main(){
        pr();
    }