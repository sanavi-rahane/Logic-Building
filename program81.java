import java.util.Scanner;
class Number
{
     boolean CheckPerfect(int iNo)
    {
        int i = 0,iSum = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        for(i = 1; i<=iNo/2; i++)
        {
            if((iNo % i) == 0)
            {
                iSum = iSum + i;
            }
        }
        if(iSum == iNo)
        return true;
        else
        return false;

    }
}//End of Number classclear

public class program81 {
     public static void main(String[] args) 
    {
        int ivalue = 0;
        boolean bRet = false;
       
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        ivalue = sobj.nextInt();

        Number nobj = new Number();
        bRet = nobj.CheckPerfect(ivalue);
        
        if(bRet == true)
        System.out.println(ivalue+" is perfect Number");
        else
        System.out.println(ivalue+" is not a perfect Number");


        //Important 

        sobj = null;
        nobj = null;

        System.gc();
   } 
}
