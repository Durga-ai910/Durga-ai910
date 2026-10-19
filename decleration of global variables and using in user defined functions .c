/* decleration of global variables and functions*/
#include<stdio.h>
int fun()
{
    int a=a+10;
    return a;
}
int fun2()
{
    int  a=a+3;
    return a;
}
int fun3()
{
    int a=a+6;
    return a;
}
int main()
{
    auto int a=10;
    int b=fun();
    int c=fun2();
    int d=fun3();
    printf("%d,%d,%d",b,c,d);
    return 0;
}
