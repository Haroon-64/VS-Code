#include<iostream>
using namespace std;

void transpose(int a[3][3], int b[3][3], int r, int c)
{
    int i, j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            b[j][i] = a[i][j];
        }
    }
}

int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3];
    int i, j;

    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    transpose(a, b, 3, 3);

    cout<<endl<<"after"<<endl;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}