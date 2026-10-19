#include<stdio.h>
int swap(int *a,int *b)
{
    int temp= *a;
    *a= *b;
    *b=temp;
}
int main()
{
    int a=45,b=56;
    printf("\nthe numbers before the swapping are %d and %d",a,b);
    swap(&a,&b);
    printf("\nthe numbers after the swapping are %d and %d",a,b);
    return 0;
}
