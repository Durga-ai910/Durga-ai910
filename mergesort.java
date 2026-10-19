import java.lang.String;
import java.util.Scanner;
class Merge
{
    public static void main(String args[])
    {
        int n;
        System.out.print("enter the size of the array");
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        int arr[]=new int[n];
        System.out.print("enter the elements into the array");
        for(int i=0;i<n;i++)
        {
             arr[i]=s.nextInt();
        }
        sort(arr,0,n);
        System.out.print("elements after sorting the array");
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
    public static void sort(int arr[],int low,int high)
    {
        int N;
        N=high-low;
        int mid=low+N/2;
        sort(arr,low,mid);
        sort(arr,mid,high);
        int temp[]=new int[N];
        int i=low,j=mid;
        for(int k=0;k<N;k++)
        {
            if(i==mid)
            {
                temp[k]=arr[j++];
            }
            else if(j==high)
            {
                temp[k]=arr[i++];
            }
            else if(arr[j]>arr[i])
            {
                temp[k]=arr[j++];
            }
            else
            {
                temp[k]=arr[i++];
            }
    
        }
        for(int k=0;k<N;k++)
        {
            arr[low+k]=temp[k];
        }
    }
}