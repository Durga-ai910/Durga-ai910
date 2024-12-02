#include<stdio.h>
int main()
{
    int r,c,k,flag,n,sum=0;
    printf("enter the sizes of the matrix \n");
    scanf("%d%d",&r,&c);
    int a[r][c],a1[r][c],a2[r][c];
    printf("enter the elements into matrix \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    do
    {
        printf("enter the other matrix to multiply  \n");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                scanf("%d",&a2[i][j]);
            }
        }
        // multiplication of two matrices
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                for(int k=0;k<r;k++)
                {
                    sum=a1[i][k]*a2[k][j];
                    a[i][j]=sum+a[i][j];
                }
                sum=0;
            }
        }
        printf("multiplication matrix is \n");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("enter the number one to continue \n");
        scanf("%d",&n);
        if(n==1)
        {
            flag=1;
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    a1[i][j]=a[i][j];
                    a[i][j]=0;
                }
            }
        }
        else
        {
            flag=0;
            break;
        }
    }while(flag);
    printf("the final matrix is \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}