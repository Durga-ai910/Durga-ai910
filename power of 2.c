#include<stdio.h>
int main()
{
    int num,q,r;
    printf("enter the number to check if it power of 2 or not");
    scanf("%d",&num);
    for(int i=0;num>0;i++)
    {
        q=num/2;
        r=0;
        if(q%2==0&&q>0)
        {
            num=num/2;
            r=1;
        }
        else
        {
            printf("the given number is not power of 2");
            break;
        }
    }
    if(r==1)
    {
        printf("the given number is the power of 2");
    }
    return 0;
}
