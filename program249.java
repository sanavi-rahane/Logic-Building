
import java.util.*;
class StringX
{
    public int CountOccarace(String str)
    {
        int iCount = 0;
        int iCnt = 0;
        char Arr[] = str.toCharArray();
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
           if(Arr[iCnt] == 'a')
           {
            iCount++;
           }
        }
        return iCount;
    }
}

public class program249 {
    public static void main(String A[]) 
    {
        Scanner scanobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter String: ");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();
        iRet = strobj.CountOccarace(sobj);   
        System.out.println("Count Ocuurance : "+iRet);

    }

}
