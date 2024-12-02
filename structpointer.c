#include<stdio.h>
struct book
{
    int price,id;
    char name[100];
}b,*b1;
int main()
{
    b1=&b;
   printf("enter the price of the book \n");
   scanf("%d",b.price);
   printf("enter the id of the book \n");
   scanf("%d",b.id);
   printf("enter the name of the book \n");
   scanf("%s",b.name);
   printf("the price of the book is %d \n",b1->price);
   printf("the id of the book is %d \n",b1->id);
   printf(" the name of the is %s \n",b1->name);
   return 0; 
}