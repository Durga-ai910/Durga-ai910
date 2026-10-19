#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="durga", c[]="swathi";
    int len;
    len=strlen(a);
    printf("the length of the given string is %d",len);
    char b[10];
    strcpy(b,a);
    printf("\n %s",b);
    strcat(a,c);
    printf("\n %s",a);
    printf("the reversed string is %s",a);
    strcmp(a,c);
    return 0;
}


