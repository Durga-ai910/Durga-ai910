#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("enter the number to replace all zeroes with ones");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(n>0)
        {
        a[i]=n%2;
        if(a[i]=0)
        {
            a[i]=1;
        }
        n=n/10;
        }
    }
    printf("the resulted number is");
    for(i=i;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
