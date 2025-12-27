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

}  //End of ArrayX class

public class program107
{
    public static void main(String A[]) 
    {
        ArrayX aobj1 =new ArrayX(5);
        aobj1.Accept();
        aobj1.Display();
                                   
        ArrayX aobj2 = new ArrayX(7);
        aobj2.Accept();
        aobj2.Display();

    }
}
