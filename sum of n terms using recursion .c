#include<stdio.h>
int rec(int n)
{
    if(n<=1)
    {
        return n;
    }
    return n+rec(n-1);
}
int main()
{
    printf("%d",rec(10));
    return 0;
}
