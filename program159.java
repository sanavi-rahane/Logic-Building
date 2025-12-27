//Input : 6
//Output :0     1   2   3   4   5   6
import java.util.*;
class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        
        for(iCnt = 0; iCnt <= 6; iCnt++)
        { 
           System.out.print(iCnt+"\t");
        }
        System.out.println();
           
    }
}
public class program159{
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
