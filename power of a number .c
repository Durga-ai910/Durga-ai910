/* calculating the power using functions*/
#include<stdio.h>
int power(int a,int b)
{
    int pow=1;
    if(a==1)
    {
        return b;
    }
    for(int i=1;i<=a;i++)
    {
        pow=pow*b;
    }
    printf("the power of the given number is %d",pow);
    return 0;
}
int main()
{
    power(2,4);
    return 0;
}
