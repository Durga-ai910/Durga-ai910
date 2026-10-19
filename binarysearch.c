#include<stdio.h>
int main()
{
    int num,s,flag,mid,temp;
    printf("enter the no of elements");
    scanf("%d",&num);
    int a[num];
    printf("enter the elements into array");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    // sorting the array
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("enter the element to be searched");
    scanf("%d",&s);
    int high=num;
    int low=1;
    do
    {
        mid=(low+high)/2;
        if(s>mid)
        {
            low=mid+1;
            flag=0;
        }
        else if(s<mid)
        {
            high=mid-1;
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }while(s!=mid&&low<=high);
    if(flag==1)
    {
        printf("search succesful");
    }
    else
    {
        printf("search is not succesful");
    }
    return 0;
}