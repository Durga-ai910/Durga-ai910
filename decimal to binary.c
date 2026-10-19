#include<stdio.h>
void main()
{
    int a[10],i,n;
    printf("ente the number to convert it into binary");
    scanf("%d",&n);
    for(i=0;n>=0;i++)
    {
        a[i]=n%2;
        n=n/10;
    }
    printf("binary number of the given number is ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
