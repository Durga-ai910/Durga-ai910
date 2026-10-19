#include<stdio.h>
int main()
{
    int x,y,max;
    printf("\n enter the values of the x and y");
    scanf("%d%d",&x,&y);
    max=(x>y)?x:y;
    while(1)
    {
        if(max%x==0 && max%y==0)
        {
            printf("the lcm of the two given numbers is %d",max);
            break;
        }
        max++;
    }
    return 0;
}
