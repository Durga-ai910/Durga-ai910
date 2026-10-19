#include<stdio.h>
int main()
{
    int a[10];
    int sum=0,n;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements into array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("the sum of the array elements are %d",sum);
    int avg=sum/n;
    printf("the average of all the array elements are %d",avg);
    return 0;
    
}
