#include<stdio.h>
int main()
{
    int rows,col,temp;
    printf("enter the rows and colums");
    scanf("%d%d",&rows,&col);
    int a[rows][col],dummy[rows][col];
    printf("enter the elements into the array");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;i<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("given matrix is");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;i<col;j++)
        {
            printf("%d",a[i][j]);
            dummy[i][j]=a[i][j];
        }
        printf("\n");
    }
    //ascending order of the rows
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            for(int k=j+1;k<col;k++)
            {
                if(a[i][j]>a[i][k])
                {
                    temp=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=temp;
                }   
            }
        }
    }
    printf("elements after arranging the rows in ascending order");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    // ascending order of the columns
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            for(int k=i+1;k<rows;k++)
            {
                if(a[i][j]>a[k][j])
                {
                    temp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=temp;
                }
            }
        }
    }
    printf("elements after arranging the columns");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}