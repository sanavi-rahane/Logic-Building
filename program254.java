
import java.util.*;
class StringX
{
    public String update(String str)
    {
        char Arr[] = str.toCharArray();
        
        Arr[0] = '_';

        return new String(Arr);    
    }
}

public class program254 {
    public static void main(String A[]) 
    {
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();
        sobj = strobj.update(sobj);  //change (not preferable) APPLICABLE only if you dont want the old string

        System.out.println("Updated String : "+sobj);


    }

}
