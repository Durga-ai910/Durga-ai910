#include<stdio.h>
int main()
{
    int a[10],n;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements into array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<=n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("the max element of the array is %d",max);
    return 0;
}
