import java.lang.*;
import java.util.Scanner;
class Selection
{
    public static void main(String args[])
    {
        int a[]={1,2,6,8,9,4,5};
        int n=a.length;
        int small,pos,temp;
        System.out.print("the elements of the array before sorting");
        for(int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
        }
        for(int i=0;i<n;i++)
        {
            small=a[i];
            pos=i;
            for(int j=i+1;i<n;i++)
            {
                if(a[j]<small)
                {
                    small=a[j];
                    pos=j;
                }
            }
            temp=a[i];
            a[i]=a[pos];
            a[pos]=temp;
        }
        System.out.print("elements after array is sorted");
        for(int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
        }
    }
}