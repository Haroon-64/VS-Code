#include<stdio.h>

void minMax(int arr[], int length, int *min, int *max)
{
    *min = *max = arr[0];

    int i;

    for(i=1;i<length;i++)
    {
        if(arr[i] > *max)
        *max = arr[i];

        if(arr[i] < *min)
        *min = arr[i];
    }
}


int main()
{
    int a[] = {52,22,4,35,46,2,244,485,898,276,3,7,1313,9090};
    int min,max;
    int length = sizeof(a)/sizeof(a[0]);
    minMax(a,length,&min,&max);
    printf("Minimum Value = %d and Maximum Value = %d ",min ,max);
    return 0;
}