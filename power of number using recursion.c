#include<stdio.h>
int power(  int x, int n)
{
    int pow=1;
    for(int i=0;i<n;i++)
    {
        pow=pow*x;
    }
    return pow;
}
int main()
{
   int  result=power(5,2);
    printf(" the power of those two numbers is %d",result);
    return 0;
}
