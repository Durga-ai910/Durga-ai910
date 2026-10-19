#include<stdio.h>
#include<string.h>
struct subject
{
    int subjectmarks[10];
}sub;
struct student
{
    int total;
    char name[20];
    struct subject sub;
}s;
int main()
{
    int size,subjectsize;
    char tempsubname[20];
    printf("enter the no of the students ");
    scanf("%d ",&size);
    printf("enter the no of subjects");
    scanf("%d",&subjectsize);
    int marks[20];
    for(int i=0;i<size;i++)
    {
        printf("enter the name of the student");
        scanf("%s",&s.name(i));
    }
    for(int i=0;i<size;i++)
    {
        s.total=0;
        for(int j=0;i<subjectsize;j++)
        {
            printf("enter the subject marks");
            scanf("%d",&marks[j]);
            s.total+=marks[j];
        }
        strcpy(sub.subjectmarks[i],s.total);
    }
    for(int i=0;i<size;i++)
    {
        printf("the name os the student is %s \n",s.name[i]);
        printf("the total marks of the student is %d\n",sub.subjectmarks[i]);
    }
    return 0;
}