import java.util.*;
//error

public class program77 {
       public static void main(String args[]) 
    {
        int ivalue = 0;
       
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        ivalue = sobj.nextInt();

        Number nobj = new Number();
        nobj.DisplayFactor(ivalue);     
   } 
}
class Number
{
    void DisplayFactor(int iNo)
    {
        int i = 0;
        for(i = 1; i<=iNo/2; i++)
        {
            if((iNo % i) == 0)
            {
                System.out.println(i);
            }
        }
    }
}//End of Number class

