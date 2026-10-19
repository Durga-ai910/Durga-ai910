#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,c,d;
    printf("enter the two numbers to find largest and smallest ang the two numbers ");
    scanf("%d%d",&a,&b);
    c=((a+b)+abs(a-b))/2;
    d=((a+b)-abs(a-b))/2;
    printf("\nthe largest amng the two numbers is %d",c);
    printf("\nthe smallest among the two nubers is %d",d);
}
