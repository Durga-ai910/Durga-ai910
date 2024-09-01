#include<stdio.h>
int main()
{
    int a[10],n,s;
    printf(" enter the size of the array");
    scanf("%d",&n);
    printf(" enter the elements into array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c1=0;
    for(int i=0;i<n;i++)
    {
        int c2=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c2++;
            }
        }
        if(c2>c1)
        {
            c1=c2;
            s=a[i];
        }
        c2=0;
    }
    printf(" the most repeated element is %d and repeated for %d times",s,c1);
    return 0;
}
