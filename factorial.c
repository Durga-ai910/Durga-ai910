#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("the factorial of the given number is %d",fact);
    return 0;
}
