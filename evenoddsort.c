#include<stdio.h>
int main()
{
    int num,flag,temp;
    printf("enter the no of elements");
    scanf("%d",&num);
    int n=num;
    int a[num];
    printf("enter the numbers");
    for(int i=0;i<n;i++)
    {
        scanf("%d\n",&a[i]);
    }
    do
    {
        flag=0;
        // for even sorting
        for(int i=0;i<n-1;i+=2)
        {
            if(a[i]>a[i+2])
            {
                a[i]=temp;
                a[i]=a[i+1];
                a[i+1]=temp;
                flag=1;
            }
        }
        // for odd sorting
        for(int i=1;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                flag=1;
            }
        }
    }while(flag);
    printf("elements after the sorting");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
