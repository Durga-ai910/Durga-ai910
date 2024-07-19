#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[3][13],b[3][3],s[3][3],r,c,k,i,j;
    printf("\nenter the number of rows");
    scanf("%d",&r);
    printf("\nenter the number of colums");
    scanf("%d",&c);
    printf("\n enter the elements into first array");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nenter the elements into second array");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",b[i][j]);
        }
    }
    printf("\n multiplying the matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(k=0;k<c;k++)
            {
                s[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\nmultiplied matrix is");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",s[i][j]);
        }
    }
    return 0;
}
