#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the values of a and b");
    scanf("%d%d",&a,&b);
    printf("\nthe numbers bfore the swapping are %d and %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nthe umbers after the swapping are %d and %d",a,b);
    return 0;
}
