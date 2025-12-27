//Input : 6
//Output :-6  -5   -4   -3   -2   -1    
import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        
        for(iCnt = -iNo; iCnt <= -1; iCnt++)
        { 
           System.out.print(iCnt+"\t");
        }
        System.out.println();
           
    }
}
public class program157{
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
