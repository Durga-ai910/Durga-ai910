import java.lang.String;
import java.util.Scanner;
class Access
{
    public static void main(String [] args)
    {
        Scanner p= new Scanner(System.in);
        System.out.print("Enter you roll: ");
        int roll=p.nextInt();
        String name;
        if(roll==1){
              name ="Admin";
        }
        else if(roll==2)
        {
              name="Manager";
        }
        else if(roll==3)
        {
              name="Employee";
        }
        else
        {
              name ="Guest";
        }
        if(0<roll && 5>roll)
        {
            System.out.print("Enter the current hour:");
            int time=p.nextInt();
            if( 0<time && time<24)
            { 
                System.out.print("Enter the day");
                int day=p.nextInt();
                if (0<=day && day<=1)
                {
                    for(int i=0;i<=3;i++)
                    {
                        System.out.print("Enter the password :");
                        int password=p.nextInt();
                        {
                            if (password==1234)
                            {
                                System.out.print("Access granted!Welcome,"+name);
                                break;
                            }
                            else
                            {
                                System.out.print("Incorrect password!Try again");
                            }
                        }
                    }
                }
            }
        }
    }
}