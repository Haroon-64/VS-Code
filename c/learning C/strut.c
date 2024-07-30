#include <stdio.h>


struct A
{
  int number;
  float mark;
  char name[20];
};

int main()
{

  int a, b, n;

  printf("Enter number of elements : ");
  scanf("%d", &n);

  struct A s[n];

  for (a = 0; a < n; a++)
  {
    printf("enter number of %d : ", a + 1);
    scanf("%d", &s[a].number);
    printf("enter mark : ");
    scanf("%f", &s[a].mark);
    printf("enter name : ");
    scanf("%s", &s[a].name);
  }
  
  printf("number\t\t marks\t\t name\n");

  for (a = 0; a < n; a++)
  {
    printf("%d\t\t", s[a].number);
    printf("%f\t\t", s[a].mark);
    printf("%s\n", s[a].name);
  }
}