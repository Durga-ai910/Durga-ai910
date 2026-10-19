#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n%400==0)
    {
        printf("leap year");
    }
    else if(n%4==0)
    {
        printf("given year is leap year");
    }
    else
    {
        printf("given year is not a leap year");
    }
    return 0;
}
