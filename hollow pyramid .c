#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<n;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(k==1||k==2*i-1||i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
