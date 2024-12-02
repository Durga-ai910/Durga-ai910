#include<stdio.h>
void quicksort(int array[],int start,int end);
int main()
{
    int num;
    printf("enter the no of elements in the array");
    scanf("%d",&num);
    int array[num]; 
    printf("enter the elements into array");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }
    quicksort(array,0,num);
    printf("elements after sorting the array");
    for(int i=0;i<num;i++)
    {
        printf("%d",array[i]);
    }
}
void quicksort(int array[], int start,int end)
{
    int index=start,pivot=array[end],temp;
    if(start<end) 
    {
        for(int i=start;i<=end;i++)
        {
            if(array[i]<=pivot)
            {
                temp=array[i];
                array[i]=array[index];
                array[index]=temp;
                index++;
            }
        }
        temp=array[index];
        array[index]=array[end];
        array[end]=temp;
        quicksort(array,start,index-1);
        quicksort(array,index-1,end);
    }
}