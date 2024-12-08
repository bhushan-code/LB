
import java.util.*;


class Program255
{
    public static void main(String A[])
    {     
        Scanner sobj = new Scanner(System.in);
        int iSize = 0, i = 0;

        System.out.println("enter the size of array : ");           //Step 1 
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];                                 //Step 2 

        System.out.println("Enter the Elements : ");                

        for(i = 0; i < iSize; i++)                                  //Step 3 
        {
            Arr[i] = sobj.nextInt();
        }

                                                                    ////Step 4  logic

        System.out.println("Entered Elements : ");
        for(i = 0 ; i < iSize; i++)
        {
            System.out.println(Arr[i]);
        }        
                                                                    //Step 5 deallocation
    }
}


