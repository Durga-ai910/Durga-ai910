#include<stdio.h>
int main()
{
    int i,size1,size2,j=0,temp;

    printf("enter the size of the first");
    scanf("%d",&size1);
    printf("enter the size of the second array");
    scanf("%d",&size2);
    int a[size1],b[size2],c[size1+size2];
    printf("enter the elements into array");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements into the second array");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("merging of the arrays");
    for(i=0;i<size1;i++)
    {
        c[j]=a[i];
        j++;
    }
    for(i=0;i<size2;i++)
    {
        c[j]=b[i];
        j++;
    }
    printf("after merging the arrays");
    for(int i=0;i<size1+size2;i++)
    {
        printf("%d",c[i]);
    }
    for(i=0;i<size1+size2;i++)
    {
        for(j=i+1;j<size1+size2;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("after sorting the merged array elements are \n");
    for(i=0;i<size1+size2;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
    
}