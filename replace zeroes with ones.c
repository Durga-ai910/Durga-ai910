#include<stdio.h>
#include<math.h>
void main()
{
    int n,ans=0,i=0;
    printf("enter the number replace all the zeroes in it");
    scanf("%d",&n);
    while(n>0)
    {
        if(n%10==0)
        {
            ans=ans+1*pow(10,i);
        }
        else
        {
            ans=ans+(n%10)*pow(10,i);
        }
        n=n/10;
        i++;
    }
    printf("\n the resulted number is %d",ans);
}
