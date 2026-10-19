#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    void selectionsort(int a[],int num);
    printf("enter the no of elements");
    scanf("%d",&num);
    int a[num];
    printf("enter the elements into array");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    selectionsort(a,num);
    printf("the ascending of the elements is\n");
    for(int i=0;i<num;i++)
    {
        printf("%d",a[i]);
    }
}
void insertionsort(int a[],int num)
{
    int temp,pointer;
    for(int i=0;i<num-1;i++)i
    {
        pointer=i;
        for(int j=i+1;j<num;j++)
        {
            if(a[pointer]>a[j])
            {
                pointer=j;
            }
            if(pointer!=i)
            {
                temp=a[pointer];
                a[pointer]=a[i];
                a[i]=temp;
            }
        }
    }
}