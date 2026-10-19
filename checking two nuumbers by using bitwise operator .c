#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the values of a and b");
    scanf("%d%d",&a,&b);
    if(a^b)
    {
        printf("the two numbers are not equal");
    }
    else
    {
        printf("the two numbers are equal");
    }
}
