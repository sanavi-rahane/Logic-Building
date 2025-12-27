//Input :   5
//Output : 1    *   2   *   3   *
//index    1    2   3   4   5   6
import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
       int iCount = 0;

       iCount = 1;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        { 
            if(iCnt % 2 ==0)
            {
                  System.out.print("*\t");

            }
            else
            {
                System.out.print(iCount+"\t");
                iCount++;
            }
        }
         
        System.out.println();
           
    }
}//Time Complexity : O(2N)
public class program162{
    public static void main(String[] args) 
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Frequency : \t");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }
}
