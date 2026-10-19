#include<stdio.h>
void evensum(int a[],int num,int sum);
int main()
{
    int i, a[10], num, sum=0;
    printf("enter the num of array elements");
    scanf("%d",&num);
    printf("enter the numbers to the array");
    for(int i=0;i<=num;i++)
    {
        scanf("%d",&a[i]);
    }
    evensum(a,num-1,sum);
}
void evensum(int a[],int num,int sum)
{
    if(num>=0)
    {
        if((a[num])%2==0)
        {
            sum+=(a[num]);
        }
        evensum(a,num-1,sum);
    }
    else
    {
        printf("sum of the even numbers in the given array is %d",sum);
        return ;
    }
}
