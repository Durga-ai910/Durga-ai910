#include<stdio.h>
int main()
{
    int dec,temp,i,j=1,binary=0;
    printf("enter a number to convert from decimal to binary");
    scanf("%d",&dec);
    temp=dec;
    while(temp!=0)
    {
        i=temp%2;
        binary+=(i*j);
        temp/2;
        j=j*10;
    }
    printf("the binary number of the given number is %d",binary);
    return 0;
}