#include<stdio.h>
int main()
{
    int r,c,temp;
    printf("enter the rows and columns of the matrix \n");
    scanf("%d%d",&r,&c);
    int a[r][c],t[r][c];
    printf("enter the elements into the matrix");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // printing the given matrix
    printf("given matrix is \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    // exchanging rows and columns
    temp=r;
    r=c;
    c=temp;
    // transposing the matrix
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            t[i][j]=a[j][i];
        }
    }
    // printing the transpose of the matrix
    printf("transpose of the given matrix \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}