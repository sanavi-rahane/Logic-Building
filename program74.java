import java.io.*;
/*
 * Checked Exception
 * 
 * PS D:\VIT\Marvellous DSA\JAVA_Programming\Classwork> java program74.java
    program74.java:11: error: unreported exception IOException; must be caught or declared to be thrown
        iNo = Integer.parseInt(bobj.readLine());
                                            ^
1 error
error: compilation failed
 */
public class program74 {
    public static void main(String[] args) {
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
