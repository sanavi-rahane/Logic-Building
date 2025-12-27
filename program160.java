//Input :   5
//Output : -5      -4      -3      -2      -1      0       1       2       3       4       5
import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        
        

        for(iCnt = -iNo; iCnt <= 0; iCnt++)
        { 
           System.out.print(iCnt+"\t");
        }
         for(iCnt = 1; iCnt <= iNo; iCnt++)
        { 
           System.out.print(iCnt+"\t");
        }
        System.out.println();
           
    }
}//Time Complexity : O(2N)
public class program160{
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
