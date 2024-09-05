#include<stdio.h>
int main()
{
    struct{
        int a;
        long int b;
    }x;
    union{
        int c;
        long int d;
    }y;
    printf("the memory allocaton of the structure is %d",sizeof(x));
    printf("\n the memory allocation of the union is %d",sizeof(y));
    return 0;
}
