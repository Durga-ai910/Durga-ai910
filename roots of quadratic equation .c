#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void real(int a,int b,int c)
{
    if(a==0)
    {
        printf("invalid");
        return;
    }
    int d=(b*b)-(4*a*c);
    double s=sqrt(abs(d));
    if(d>0)
    {
        printf("the roots are differnt and real");
        printf("%f",(double)(-b+s)/(2*a));
        printf("\n %f",(double)(-b-s)/(2*a));
    }
    else if(d==0)
    {
        printf("the roots are real and equal");
        printf("%f",(double)-b/(2*a));
        printf("\n %f",(double)-b/(2*a));
    }
    else
    {
        printf("the roots are imaginary and different");
        printf("\n %f",(double)(-b+s)/(2*a));
        printf("\n %f",(double)(-b-s)/(2*a));
    }
}
int main()
{
    real(4,8,4);
    return 0;
}
