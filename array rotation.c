#include<stdio.h>
int main()
{
    int a[20];
    int b[20];
    int n,i,d;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("\nenter the elements into the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nthe array elements are:-");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nthe reversed array elements are");
    for(i=0;i<n;i++)
    {
        a[i+0]=b[n-1-i]
    }
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    int start=0;
    int end=n-1;
    printf("\nenter how many rotations you want");
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        b[i]=a[n-i];
    }
    for(i=0;i<(n-d)/2;i++)
    {
        b[start+i],b[end-d-i]=b[end-i-d];
    }
    for(i=0;i<d/2;i++)
    {
        b[end-i],b[end-d+i]=b[end-d+i],b[end-i];
    }
    printf("\nyour required array is");
    for(i=0;i<n;i++)
    {
        printf("\n%d",b[i]);
    }
    return 0;
}
