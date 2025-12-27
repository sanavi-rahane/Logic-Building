
import java.util.*;

public class program246 {
    public static void main(String A[]) 
    {
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        String sobj = scanobj.nextLine();

        char Arr[] = sobj.toCharArray();
       
        System.out.println(Arr[0]);
        System.out.println(Arr[1]);
        System.out.println(Arr[2]);
        System.out.println(Arr[3]);
        System.out.println(Arr[4]);
        
             

    }

}

/*
PS D:\VIT\Marvellous DSA\JAVA_Programming\Classwork> javac program246.java
PS D:\VIT\Marvellous DSA\JAVA_Programming\Classwork> java program246      
Enter String: 
hello
h
e
l
l
o
PS D:\VIT\Marvellous DSA\JAVA_Programming\Classwork> java program246
Enter String: 
demo
d
e
m
o
Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: Index 4 out of bounds for length 4
        at program246.main(program246.java:18)
PS D:\VIT\Marvellous DSA\JAVA_Programming\Classwork>  */