#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of a and b and c");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("the largest values is %d",a);
    }
    else if(b>a&&b>c)
    {
        printf("the largest among the threenumbers is %d",b);
    }
    else if(c>a&&c>b)
    {
        printf("the largest among the three number is %d",c);
    }
    else
    {
        printf("the three numbers are equal");
    }
    return 0;
}
    
