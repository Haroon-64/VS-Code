#include <stdio.h>

void swap1 (int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap2 (int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    swap1(a, b);
    printf("%d %d\n", a, b);
    
    swap2(&a, &b);
    printf("%d %d", a, b);
    return 0;}