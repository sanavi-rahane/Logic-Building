///Accet the number from print its factorial
//Input : 5
//output : 120
import java.util.Scanner;
class Number
{
    int CalculateFactorial(int iNo)
    {
         int i = 0, iFact = 1;
         
         //Logic 
         for(i = 1; i <= iNo; i++)
         {
            iFact = iFact * i;
         }
         return iFact;
    }
}

public class program86 {
     public static void main(String[] args) 
    {
        int ivalue = 0,iRet = 0;
        
       
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        ivalue = sobj.nextInt();

        Number nobj = new Number();
        iRet = nobj.CalculateFactorial(ivalue);

        System.out.println("Factorial is : "+iRet);

        //Important 

        sobj = null;
        nobj = null;

        System.gc();
   } 
}
