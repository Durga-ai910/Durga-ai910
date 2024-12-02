#include<stdio.h>
int main()
{
    int c,r;
    printf("enter the no of rows and columnns of the array");
    scanf("%d%d",&c,&r);
    int a[r][c],a1[r][c],a2[r][c];
    // reading the first amtrix elements
    printf("enter the elements into the first array \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",(*(a1+i)+j));
        }
    }
    // reading the second matrix
    printf("enter the elements into second matrix \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",*(a2+i)+j);
        }
    }
    // adding the two matrices
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            *(*(a+i)+j)=*(*(a1+i)+j)+*(*(a2+i)+j);
        }
    }
    // printing the matrix
    printf("the resultant matrix is \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",*(*(a+i)+j));
        }
        printf("\n");
    }
    return 0;
}