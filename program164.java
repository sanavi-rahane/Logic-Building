/* Non linear pattern
    *   *   *   *
    *   *   *   *
    *   *   *   *
    
    iRow = 3
    iCol = 4

*/   
import java.util.*;
class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i = 0,j = 0;    
        for(i = 1; i <= iRow ; i++)     //Outer Loop
        { 
            for(j = 1; j <= iCol ; j++)   //Inner Loop
            {
                 System.out.print("*\t");
            }
            System.out.println();
        }   
    }
}
public class program164{
    public static void main(String[] args) 
    {
        int iValue1 = 0,iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of Rows : \t");
        iValue1 = sobj.nextInt();

        
        System.out.println("Enter the number of Cols : \t");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1,iValue2);
    }
}
