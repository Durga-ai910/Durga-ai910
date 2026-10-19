#include<stdio.h>
#include<string.h>
int main()
{
    struct{
        char name[10];
        int rollno;
        float marks;
    }info;
    printf("enter the name of the student");
    scanf("%s",&info.name);
    printf("enter the rollno of the student");
    scanf("%d",&info.rollno);
    printf(" enter the marks of the student");
    scanf("%f",&info.marks);
    printf("\nthe name of the student is %s",info.name);
    printf("\nthe rollno fo the student is %d",info.rollno);
    printf("\n the marks of the student is %f",info.marks);
    return 0;
}
