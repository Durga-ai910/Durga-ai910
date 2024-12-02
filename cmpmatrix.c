#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,flag;
    printf("enter the rows and columns of the first matrix \n");
    scanf("%d%d",&r1,&c1);
    printf("enter the rows and columns of ths second matrix \n");
    scanf("%d%d",&r2,&c2);
    int a1[r1][c1],a2[r2][c2];
    if(r1==r2 && c1==c2)
    {
        printf("enter the elements into the first matrix \n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                scanf("%d",&a1[i][j]);
            }
        }
        printf("enter the elements into the second matrix \n");
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                scanf("%d",&a2[i][j]);
            }
        }
        // comparing the matrices
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                if(a1[i][j]!=a2[i][j])
                {
                    flag=0;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            printf("two matrices are equal");
        }
        else
        {
            printf("two matrices are not equal");
        }
        
    }
    else
    {
        printf("comparision not possible");
    }
    return 0;
}