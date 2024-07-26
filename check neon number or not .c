#include<stdio.h>
#include<math.h>
int neon(int num)
{
    int square=num*num;
    int n=square;
    int sum=0;
    while(n>0)
    {
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    if(num==sum)
    {
        printf("the gven number is neon number");
    }
    else
    {
        printf("the given number is not a neon nubmer");
    }
}
int main()
{
    neon(9);
    return 0;
}
