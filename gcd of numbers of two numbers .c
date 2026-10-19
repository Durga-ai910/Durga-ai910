#include<stdio.h>
#include<math.h>
int gcd(int a, int b)
{
    int result=((a<b) ? a : b);
    while(result>0)
    {
        if(a%result==0 && b%result==0)
        {
        break;
        }
        result--;
    }
    return result;
}
void main()
{
    int c=gcd(3,4);
    printf("the gcd of two numbrs is %d",c);
}
