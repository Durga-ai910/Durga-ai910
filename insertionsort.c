#include<stdio.h>
#include<conio.h>
int main()
{
    int num,temp,j;
    printf("enter the size of the array");
    scanf("%d",&num);
    int a[num];
    printf("enter the elements into array");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    //sorting the elements
    for(int i=0;i<num;i++)
    {
        j=i;
        while(a[j]>a[j+1]&&j<=i)
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            j--;
        }
    }
    printf("after sorting the array elements are");
    for(int i=0;i<num;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}