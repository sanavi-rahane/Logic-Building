//Write a program which accept N number of element from user and count Even NUmber and Sum of all number 
import java.util.*;

class ArrayX{
    public void Display(int Brr[])
    {
        int i = 0;
        System.out.println("Elements of the Array are : ");
        for(i = 0; i < Brr.length;i++)
        {
            System.out.println(Brr[i]);
        }
    }
    public int CountEven(int Brr[])
    {
        int iCount = 0;
        int i = 0;

        for(i = 0; i < Brr.length; i++)
        {
            if(Brr[i] % 2 == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }
    public int Summation(int Brr[])
    {
        int Sum = 0;
        int i = 0;
        for(i = 0;i < Brr.length; i++)
        {
            Sum =Sum + Brr[i];
        }
        return Sum;
    }
}
public class program102 {
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0,i = 0, iRCount = 0,iRSum = 0;

        System.out.println("Enter the Size of Array : ");
        iSize = sobj.nextInt();      

        int Arr[] = new int[iSize];   
      
        System.out.println("Enter the elements : ");

        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        ArrayX aobj = new ArrayX();
        aobj.Display(Arr);

        iRCount = aobj.CountEven(Arr);
        iRSum = aobj.Summation(Arr);

        System.out.println("Number of Even Element is : "+iRCount);
        System.out.println("Sum Of All Element in an Arry is : "+iRSum);

        //Important

        aobj = null;
        Arr = null;
        sobj = null;

        System.gc();  

    }
}
