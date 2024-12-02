#include<stdio.h>
int main()
{
    int num,stop,a=0,b=0,c=0,win;
    do
    {
        printf("enter the integer from 1 to 3 \n");
        scanf("%d",&num);
        if(0<num && num<4)
        {
            if(num==1)
            {
                a++;
            }
            else if(num==2)
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        else
        {
            printf("enter valid number \n");
        }
        printf("enter number 1 to continue voting \n");
        scanf("%d",&stop);
    }while(stop);           
    printf("votes for a is %d \n ",a);
    printf("votes for b is %d \n",b);
    printf("votes for c is %d \n",c);
    printf("enter 0 to see the winner \n");
    scanf("%d",&win);
    if(win==0)
    {
       if(a>b && a>c)
       {
        printf("A won with the votes of %d\n",a);
       }
       else if(b>c && b>a)
       {
        printf("B won with the votes of %d \n",b);
       }
       else
       {
        printf("C won with the votes of %d \n",c);
       } 
    }
    return 0;
}