#include<iostream>
#include <cstdlib>
using namespace std;

int knight[2];
int n,c,x,y;
int k;
void Start();
void Board();
bool Check();
void Move(int Choice);

int main(){
    k=(unsigned int)rand();
    Board();
    Start();
    int total= n*n;
    double prob=c/k/n;
    cout<<prob;
}

bool Check(){
    if(knight[0]>n || knight[1]>n)
        return false;
    return true;
}
void Move(int choice){
    switch(choice){
        case 0:
            knight[0]=x-1;
            x--;
            knight[1]=y-2;
            y-=2;
            if(Check()==false);
                goto jump;
            break;

        case 1:
            knight[0]=x+1;
            x++;
            knight[1]=y-2;
            y-=2;
            if(Check()==false);
                    goto jump;
                break;

        case 2:
            knight[0]=x+2;
            x+=2;
            knight[1]=y-1;        
            y--;
            if(Check()==false);
                    goto jump;
                break;

        case 3:
            knight[0]=x+2;
            x+=2;
            knight[1]=y+1;
            y++;
            if(Check()==false);
                    goto jump;
                break;

        case 4:
            knight[0]=x+1;
            knight[1]=y+2;
            x++;
            y+=2;
            if(Check()==false);
                    goto jump;
                break;

        case 5:
            knight[0]=x-1;
            knight[1]=y+2;
            x--;
            y+=2;
            if(Check()==false);
                    goto jump;
                break;

        case 6:
            knight[0]=x-2;
            knight[1]=y+1;
            x-=2;
            y++;
            if(Check()==false);
                    goto jump;
                break;

        case 7:
            knight[0]=x-2;
            knight[1]=y-1;
            x-=2;
            y--;
            if(Check()==false);
                    goto jump;
                break;
    }
jump:
return;
}

void Board()
{
    {
    cout<<"size";
    cin>>n;
    if(n%2==0){
        knight[0]=n/2;
        knight[1]=n/2;
            }
    else{
        knight[0]=(n+1)/2;
        knight[1]=(n+1)/2;
        }
    x=knight[0];
    y=knight[1];
    }
}
void Start(){
    int a=k;
    while(a>0){
    int choice = (unsigned int)(rand()%(8));
        Move(choice);
        c++;
        a--;
    }
    
}