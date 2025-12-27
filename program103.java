/*
 * OOP Design 
 */

class ArrayX
{
    public int Arr[];
    public int iSize;

    public ArrayX(int No)
    {
        iSize = No;
        Arr = new int[iSize];
    }

}
public class program103 {
    public static void main(String A[])
    {
        ArrayX aobj1 =new ArrayX(5);
        ArrayX aobj2 = new ArrayX(7);
    }
}
