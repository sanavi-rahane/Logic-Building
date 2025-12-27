//Accept the number from user and display its digits in reverse digits format
import java.util.Scanner;
class Digit
{
    void DisplayDigits(int iNo)
    {
       
         int iDigit = 0;
        while (iNo != 0) {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
    }
}
public class program90 {
     public static void main(String[] args) 
    {
        int ivalue = 0;        
       
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        ivalue = sobj.nextInt();

        Digit dobj = new Digit();
        dobj.DisplayDigits(ivalue);

        //Important 

        sobj = null;
        dobj = null;

        System.gc();
   } 
}
