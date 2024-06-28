#include<stdio.h>
int main()
{
    int n,rev;
    printf("enter a number to check if it is palindrome or not");
    scanf("%d",&n);
    int temp=n;
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
    if(temp==rev)
    {
        printf("given number is palindrome");
    }
    else
    {
        printf("the given number is not a palindrome number");
    }
    return 0;
}
