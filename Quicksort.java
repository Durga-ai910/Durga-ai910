import java.lang.*;
import java.util.Scanner;
class Quicksort
{
    public static void sort(String args[])
    {
        quicksort(arr,0,a.length-1);
    }
    public static void quicksort(int arr[],int low,int high)
    {
        int i=low,j=high;
        int pivot;
        pivot=arr[(high+low)/2];
        while(low<high)
        {
            while(i<pivot)
            {
                i++;
            }
            while(j>pivot)
            {
                j--;
            }
            if(i<=j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                i++;
                j--;
            }
        }
        if(low<j)
        {
            void quicksort(arr,low,j);
        }
        if(high>i)
        {
            void quicksort(arr,i,high);
        }
    }
    public static void main(String args[])
    {
        int low,high;
        int arr[]=new int[n];
        System.out.print("enter the elements into array");
        for(int i=0;i<n;i++)
        {
            a[i]=s.nextInt();
        }
        System.out.print("the elements before sorting the array");
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
        void sort(arr,0,n-1);
        System.out.print("elements after sorting the array");
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }        
    }
}