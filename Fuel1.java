import java.lang.*;
import java.util.Scanner;
class Fuel1
{
    public static void main(String[] args)
    {
        Scanner p=new Scanner(System.in);
        System.out.print("enter the quantity of diesel");
        int a=p.nextInt();
        System.out.print("Enter the total distance covered");
        int b=p.nextInt();
        int c=(20/150)*100;
        System.out.print("The total fuel consumption is"+c);
    }
}