#include<stdio.h>
int main()
{
    int n,rev;
    printf("enter a number to reverse it");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(n>0)
        {
            rev=rev*10+n%10;
            n=n/10;
        }
        else
        break;
    }
    printf("the reversed number is %d",rev);
    return 0;
}
