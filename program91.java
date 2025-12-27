//Accept the number from user and return the sum of its Digits
import java.util.Scanner;
class Digit
{
    int SumOfDigits(int iNo)
    {
       if(iNo < 0)
       iNo = -iNo;
        int iDigit = 0,iSum = 0;
        while (iNo != 0) {
            iDigit = iNo % 10;
            iSum =iSum + iDigit;
            iNo = iNo / 10;
        }
        return iSum;
    }
}
public class program91 {
     public static void main(String[] args) 
    {
        int ivalue = 0; 
        int iRet = 0;       
       
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        ivalue = sobj.nextInt();

        Digit dobj = new Digit();
        iRet = dobj.SumOfDigits(ivalue);

        System.out.println("Addition of Digits is : "+iRet);
            

        sobj = null;
        dobj = null;

        System.gc();
   } 
}
