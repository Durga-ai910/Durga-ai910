#include<stdio.h>
int triangle(int row)
{
    int max=row*(row+1)/2;
    int  num=max;
    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",num);
            num--;
        }
        printf("\n");
    }
}
int main()
{
    int row=5;
    triangle(row);
    return 0;
}
