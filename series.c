#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    float sum=0;
    printf("enter an integer");
    scanf("%d",&n);
    printf("the values are \n");
    for(int i=1;i<=n;i++)
    {
        if(i<n)
        {
            printf("1/%d+",i);
        }
        else
        {
            printf("1/%d=",i);      
        }
    }
    for(int i=1;i<=n;i++)
    {
        sum+=(float)1/i;
    }
    printf("the sum is %f",sum);
    return 0;
}