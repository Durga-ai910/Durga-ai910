import java.lang.*;
class Selection
{
    public static void main(String args[])
    {
        int a[]={1,2,6,8,9,4,5};
        int small,pos,temp;
        System.out.println("the elements of the array before sorting");
        for(int i=0;i<7;i++)
        {
            System.out.print(a[i]+" ");
        }
        for(int i=0;i<7;i++)
        {
            small=a[i];
            pos=i;
            for(int j=i+1;i<7;i++)
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
        System.out.println("elements after array is sorted");
        for(int i=0;i<7;i++)
        {
            System.out.print(a[i]+" ");
        }
    }
}