#include<stdio.h>

struct marks{

    char name[30];
    int roll_no;
    int english_marks;
    int maths_marks;
    int physics_marks;
    int chemistry_marks;
    int programming_marks;

};

int main()
{
    int i;
    struct marks Marks[5] = 
    {
        {"Zahaan",1,75,90,80,39,90},
        {"Airaad",2,100,90,70,50,90},
        {"Zeeshan",3,53,70,80,100,70},
        {"Moomin",4,75,95,70,80,100},
        {"Rasik",5,65,90,100,90,50}
    };

    printf("\n.....MARKS_SHEET......\n");

    for(i=0;i<5;i++)
    {
        printf("\n Studen Name : %s",Marks[i].name);
        printf("\n Roll No.: %d",Marks[i].roll_no);
        printf("\n English Marks : %d",Marks[i].english_marks);
        printf("\n Maths Marks : %d",Marks[i].maths_marks);
        printf("\n Physics Marks : %d",Marks[i].physics_marks);
        printf("\n Chemistry Marks : %d",Marks[i].chemistry_marks);
        printf("\n Programming Marks : %d",Marks[i].programming_marks);
        printf("\n\n");
    };
}