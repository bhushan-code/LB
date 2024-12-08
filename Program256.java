
import java.util.*;


class Program256
{
    public static void main(String A[])
    {     
        Scanner sobj = new Scanner(System.in);
        int iSize = 0, i = 0;

        System.out.println("enter the size of array : ");          
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];                                 

        System.out.println("Enter the Elements : ");                

        for(i = 0; i < Arr.length; i++)                                  
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Entered Elements : ");
        for(i = 0 ; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }        
    }
}


