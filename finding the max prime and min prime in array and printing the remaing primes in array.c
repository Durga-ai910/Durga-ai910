#include<stdio.h>
int main()
{
    int a[10];
    int n,l,d,min,m,p;
    printf("enter the sixeof the array");
    scanf("%d",&n);
    printf("enter the elements into array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                l++;
            }
        }
        if(l==2)
        {
            m=a[i];
        }
        l=0;
    }
    min=m;
    int max=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                d++;
            }
        }
        if(d==2)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        d=0;
    }
    printf("the max prime value in the array is %d",max);
    printf("\nthe min prime value in the array is %d",min);
    printf("\nthe elements between the max prime and min prime in the array are");
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                p++;
            }
        }
        if(p==2)
        {
            if(min<a[i]<max)
            {
                printf("%d",a[i]);
            }
        }
        p=0;
        printf("\n");
    }
    return 0;
}
