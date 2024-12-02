#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter the sizes of the array");
    scanf("%d%d",&n1,&n2);
    int a[n1+n2],a1[n1],a2[n2];
    printf("enter the elements into the array");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("enter the elements into second matrix");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
    }
    // removing duplicates in first array
    int j=0;
    for(int i=0;i<n1;i++)
    {
        if(a1[j]==a1[i])
        {
            delete_element_by_value(a1[i]);
        }
    }
    //  removing duplicates in second array
    int k=0;
    for(int i=0;i<n2;i++)
    {
        if(a2[k]==a2[i])
        {
            delete_element_by_value(a2[i]);
        }
    }
    // union of two sets
    for(int i=0;i<n1+n2;i++)
    {
        a[i]=a1[i];
    }
    int i=0;
    for(int i=n1;i<n1+n2;i++)
    {
        a[i]=a2[i];
        i++;
    }
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}