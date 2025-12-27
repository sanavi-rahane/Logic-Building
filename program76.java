
import java.io.*;
//IT IS NOT A GOOD APPROCH BUT IT IS FASTER coz logic wriiten inside main
//info : string input taken in buffer reader
public class program76 {
    public static void main(String[] args) throws IOException
    {
        int iNo = 0;
        int i = 0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number : ");
       
        iNo = Integer.parseInt(bobj.readLine());

        for(i = 1; i<=iNo/2; i++)
        {
            if((iNo % i) == 0)
            {
                System.out.println(i);
            }
        }
   } 
}
