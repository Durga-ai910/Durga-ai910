#include<stdio.h>
#include<math.h>
int main()
{
    int a[10],n,s,found,pos;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements into array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter an element to search");
    scanf("%d",&s);
    for(int i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            int found=1;
            int pos=i;
            break;
        }
    }
    if( found)
    {
        printf("the element found at the index %d",pos);
    }
    else
    {
        printf("element does not found");
    }
    return 0;
}
