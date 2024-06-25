#include<stdio.h>
int prime(int n,int fact)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            fact++;
        }
    }
    if(fact==2)
    {
        printf("\n%d",n);
    }
}
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        prime(i,0);
    }
    return 0;
}
