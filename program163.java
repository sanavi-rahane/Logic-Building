//Input :   5
//Output : 1    *   2   *   3   *
//index    1    2   3   4   5   6        
import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
       int iCnt = 0;       
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        { 
            if(iCnt % 2 ==0)
            {
                  System.out.print("*\t");

            }
            else
            {
                System.out.print(((iCnt/2)+1) +"\t");
               
            }
        }
         
        System.out.println();
           
    }
}//Time Complexity : O(N)
public class program163{
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
