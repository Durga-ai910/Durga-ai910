#include<stdio.h>
#include<math.h>
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
    for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    printf("the sorted elements are");
    for(int i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
