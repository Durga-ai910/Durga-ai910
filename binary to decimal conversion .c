#include<stdio.h>
#include<math.h>
void main()
{
    int n,i=0,ans=0,r;
    printf("enter the number to change into decimal form");
    scanf("%d",&n);
    while(n>0)
    {
     r=n%10;
     ans+=r*pow(2,i);
     n=n/10;
     i++;
    }
    printf("the resulted number is %d",ans);
}
