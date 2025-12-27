
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
           if(Arr[iCnt] >= 'A' && Arr[iCount] <= 'Z')
           {
            iCount++;
           }
        }
        return iCount;
    }
}

public class program251 {
    public static void main(String A[]) 
    {
        Scanner scanobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter String: ");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();
        iRet = strobj.CountSmall(sobj); 

        System.out.println("Capital Letter Count : "+iRet);

    }

}
