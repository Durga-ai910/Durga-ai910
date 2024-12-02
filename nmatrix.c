#include<stdio.h>
int main()
{
    int r,c,x,flag;
    printf("enter the numbers of rows and columns \n");
    scanf("%d%d",&r,&c);
    int a1[r][c],a2[r][c],a[r][c];
    printf("enter the elements into array \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    do
    {
        printf("enter the elements into second array \n");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                scanf("%d",&a2[i][j]);
            }
        }
        // addition of two matrices
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                a[i][j]=a1[i][j]+a2[i][j];
            }
        }
        printf("the addition of matrices \n");
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("enter 1 to continue this process \n");
        scanf("%d",&x);
        if(x==1)
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
        }
    }while(flag);
    printf("the addition of n number of matrices \n");
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