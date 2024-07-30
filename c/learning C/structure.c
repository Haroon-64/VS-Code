#include<stdio.h>

struct address{
    char name[50];
    char area[100];
    char city[50];
    char state[20];
    int pin;

};

int main()
{
    int i ;
    struct address Address[4] = 
    {
        {"Zahaan","Mallabagh","Srinagar","J&K",190006},
        {"Airaad","Lalbazar","Srinagar","J&K",190003},
        {"Zeeshan","Nowshera","Srinagar","J&K",190001},
        {"Moomin","Soura","Srinagar","J&K",190011}
    };
    printf("\n\n......DETAILS......\n\n");

    for(i=0;i<4;i++)
    {
        printf("\n Name = %s",Address[i].name);
        printf("\n Area = %s",Address[i].area);
        printf("\n City = %s",Address[i].city);
        printf("\n State = %s",Address[i].state);
        printf("\n PinCode = %d",Address[i].pin);
        printf("\n\n");
    }
}