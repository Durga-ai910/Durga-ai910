#include<stdio.h>
int main()
{
    int  r,c,flag=1;
    printf("enter the  rows and columns of the matrix");
    scanf("%d%d",&r,&c);
    int a[r][c];
    if(r==c)
    {
        printf("enter the elements into matrix \n");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i==j&&a[i][j]!=1)
                {
                    flag=0;
                }
                if(i!=j&&a[i][j]!=0)
                {
                    flag=0;
                }
            }
        }
        if(flag==1)
        {
            printf("the given matrix is indentity matrix \n");
        }
        else
        {
            printf("not identity matrix \n");
        }
    }
    else
    {
        printf("identity matrix sholud be square matrix \n");
    }
    return 0;
}