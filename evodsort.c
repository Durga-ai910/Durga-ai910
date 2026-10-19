#include<stdio.h>
int main()
{
    int num,flag,temp;
    printf("enter the no of elements in the array");
    scanf("%d",&num);
    int a[num];
    printf("enter the elements");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    do
    {
        flag=0;
        // for even sorting
        for(int i=0;i<num-1;i+=2)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                flag=1;
            }
        }
        // for odd sorting
        for(int i=1;i<num-1;i+=2)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i=1]=temp;
                flag=1;
            }
        }
    }while(flag);
    printf("after sorting the array the elements are");
    for(int i=0;i<num;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}