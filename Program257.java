//addition of n number
import java.util.*;



class Program257
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0, i = 0;

        System.out.println("enter the size of array : ");          
        iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);     
    }
}



class ArrayX
{
    public int Arr[];
     
    ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }
}