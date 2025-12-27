
import java.util.*;
class StringX
{
    public String update(String str)
    {
        char Arr[] = str.toCharArray();
        
        Arr[0] = '_';

        return new String(Arr);    //change 1 object reduced
    }
}

public class program253 {
    public static void main(String A[]) 
    {
        String sRet = null;
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();
        sRet = strobj.update(sobj); 

        System.out.println("Updated String : "+sRet);


    }

}
