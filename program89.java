///Accet the number from print its factorial
//Input : 5
//output : 120

import java.util.Scanner;
class Number
{
    long CalculateFactorial(int iNo)
    {
         int i = 0;  
         long iFact = 1;        //Important
         //updator
        if(iNo < 0)
        {
            iNo = -iNo;
        }
         //Logic 
         i = 1;
         while (i <= iNo) {                //change
            iFact = iFact * i;
            i++;
         }
         return iFact;
    }
}

public class program89 {
     public static void main(String[] args) 
    {
        int ivalue = 0;
        long iRet = 0;
        
       
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
