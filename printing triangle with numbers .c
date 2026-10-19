#include<stdio.h>
int main()
{
    int rows,columns,number=1,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(columns=1;columns<=rows;columns++)
        {
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
    return 0;
}
