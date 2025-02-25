#include<stdio.h>
int main()
{
    int n,count,n1,n2,n3,flag;
    printf("enter the value of n");
    scanf("%d",&n);
    n1=0;
    n2=1;
    n3=0;
    count=0;
    flag=0;
    while(n3<=n)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        for(int i=1;i<=n3;i++)
        {
            if(n3%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            flag++;
        }
        count=0;
        
    }
    printf("the number of primes is %d",flag);
    return 0;
}
