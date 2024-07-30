// array of structs
#include <stdio.h>

struct student {
    char name[100];
    int age;
    float marks;
};

int main() {
    int arr1[3]= {1, 2, 3};

 struct student arr[3] = {
    {"John", 20, 110}, {"Alice", 22, 90}, {"Bob", 21, 75}
    };
    int i =0;
    int max = arr[0].marks;
    while (i<3) {
        if (arr[i].marks > max) {
            max = arr[i].marks;
        }
        i++;
        
    }
    printf("The maximum marks is %d", max);

}