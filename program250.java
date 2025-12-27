
import java.util.*;
class StringX
{
    public int CountSmall(String str)
    {
        int iCount = 0;
        int iCnt = 0;
        char Arr[] = str.toCharArray();
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
           if(Arr[iCnt] >= 'a' && Arr[iCount] <= 'z')
           {
            iCount++;
           }
        }
        return iCount;
    }
}

public class program250 {
    public static void main(String A[]) 
    {
        Scanner scanobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter String: ");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();
        iRet = strobj.CountSmall(sobj); 

        System.out.println("Small Letter Ocuurance : "+iRet);

    }

}
