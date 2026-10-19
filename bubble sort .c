#include<stdio.h>
int main()
{
    int a[10];
    int n,temp;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements into array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>=a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the sorted array is");
    for(int j=0;j<n;j++)
    {
        printf("\n %d",a[j]);
    }
    return 0;
}
