#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[10];
    char str1[2],str2[2],str3[4];
    int day,month,year;
    char s1,s2;
    printf("enter the date of birth");
    scanf("%s",str);
    for(int i=0;i<2;i++)
    {
        str1[i]=str[i];
    }
     day=atoi(str1);
    for(int i=3;i<5;i++)
    {
        str2[i]=str[i];
    }
     month =atoi(str2);
    for(int i=6;i<10;i++)
    {
        str3[i]=str[i];
    }
    year=atoi(str3);
    s1=str[2];
    s2=str[5];
    if(0<=day<=31)
    {
        if(s1=='-' || s1=='/')
        {
            if(0<=month<=12)
            {
                if(s2=='-'||s2=='/')
                {
                    if(0<=year<=2099)
                    {
                        printf("valid date of birth");
                    }
                    else{
                        printf("not valid");
                    }
                }
                else{
                    printf("not valid");
                }
            }
            else{
                printf("not valid");
            }
        }
        else{
            printf("not valid");
        }
    }
    else{
        printf("not valid");
    }
    return 0;
}
