#include<stdio.h>
int main()
{
    int num,s,c,flag,mid;
    printf("enter the no of the elements in the array");
    scanf("%d",&num);
    int a[num];
    printf("enter the elements into array");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    //for sorting the arrray
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(a[i]>a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
    printf("sorted array is");
    for(int i=0;i<num;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("enter the element to be seached");
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
        printf("search succesful \n");
    }
    else
    {
        printf("element not found");
    }
    return 0;
}
