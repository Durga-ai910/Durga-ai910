#include<stdio.h>
int main()
{
    int a[5][3],r,c;
    printf("enter the no of rows");
    scanf("%d",&r);
    printf("enter the no of columns");
    scanf("%d",&c);
    printf("enter the elements into two dimensional array");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the two dimensional array elements are ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
