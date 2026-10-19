#include<stdio.h>
#include<math.h>
int main()
{
    int a[10],n,sum=0,s=0;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the values into array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=(float)a[i];
    }
    int mean=sum/(float)n;
    for(int i=0;i<n;i++)
    {
        s+=((float)a[i]-mean)*((float)a[i]-mean);
    }
    int sd=sqrt(s/n);
    printf("the standard deviation of the given data is %f",sd);
    return 0;
}
