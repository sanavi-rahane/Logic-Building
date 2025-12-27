/*
 * OOP Design 
 */
import java.util.*;
class ArrayX
{
    //Characteristics
    private int Arr[];
    private int iSize;

    //Constructor
    public ArrayX(int No)
    {
        System.out.println("Inside constructor");
        iSize = No;
        Arr = new int[iSize];
    }

    //Methods
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0;
        System.out.println("Enter the Elements of Array : ");

        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        
    }
    public void Display()
    {
        System.out.println("Elements Of the Array are : ");
        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
    public float Average()
    {
        int i = 0;
        int iSum = 0;
        for(i = 0; i < Arr.length; i++)
        {
            iSum+=Arr[i];
        }
        return iSum/iSize;

    }
}  //End of ArrayX class

public class program108
{
    public static void main(String A[]) 
    {
        float fRet = 0.0f;
        ArrayX aobj1 =new ArrayX(5);
        aobj1.Accept();
        aobj1.Display();
        fRet = aobj1.Average();

        System.out.println("Average is : "+fRet);                                  
        
    }
}
