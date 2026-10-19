#include<stdio.h>
int main()
{
    int i,a[10],c,k,j,n,num;
    printf("enter the no of elements in the array \n");
    scanf("%d",&num);
    printf("enter the elements into array");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("before arranging");
    for(i=0;i<num;i++)
    {
        printf("%d",a[i]);
    }
    k=num;
    while(k>0)
    {
        for(j=0;j<k-1;j++)
        {
            c=a[j];
            a[j]=a[j+1];
            a[j+1]=c;
        }
        k--;
    }
    printf("after arranging the elements");
    for(i=0;i<num;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}