#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    char ch;
    printf("enter the character to perform the certain operation");
    scanf("%c",&ch);
    if(ch=='x')
        exit;
    printf("enter the first operand");
    scanf("%d",&a);
    printf("enter the second operand");
    scanf("%d",&b);
    switch(ch)
    {
        case '+':
        {
            printf("the addition of two numbers is %d",a+b);
            break;
        }
        case '-':
        {
            printf("the subtraction of two numbers is %d",a-b);
            break;
        }
        case '*':
        {
            printf("the multiplication of two numbers is %d",a*b);
            break;
        }
        case '/':
        {
            printf("the division of two numbers is %d",a/b);
            break;
        }
        default:
        {
            printf("the operands are incorrect and error ocured");
        }
        printf("\n");
    }
    return 0;
}
