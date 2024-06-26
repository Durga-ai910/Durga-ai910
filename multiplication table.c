#include<stdio.h>
int main()
{
    int n,range,mul;
    printf("enter the number to write the multiplication table for it");
    scanf("%d",&n);
    printf("ente therange of the for the multiplication");
    scanf("%d",&range);
    for(int i=0;i<=range;i++)
    {
        mul=n*i;
        printf("\n %d*%d=%d",n,i,mul);
    }
    return 0;
}
