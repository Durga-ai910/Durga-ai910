#include<stdio.h>
struct book
{
    int id,price;
    char name[100];
};
int main()
{
    struct book b;
    printf("enter the price of the book \n");
    scanf("%d",&b.price);
    printf("enter the id of the book \n");
    scanf("%d",&b.id);
    printf("enter the book name \n");
    scanf("%s",&b.name);
    printf(" the price of the book is %d \n",b.price);
    printf(" the id of the book is %d \n",b.id);
    printf("the name of the book is %s \n",b.name); 
    return 0;
}