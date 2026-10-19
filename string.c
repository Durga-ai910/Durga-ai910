#include<stdio.h>
#include<string.h>
int main()
{
    int i,word=1;
    char str[100];
    printf("enter a string");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            word++;
        }
    }
    printf("the no of the words in the given sentence are %d",word);
    return 0;
}