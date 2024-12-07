//take number from user ,return count of 5,6 ,7 8 digit digit

import java.util.*;


class Program250
{
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);
        
        int iValue = 0;
        
        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        dobj.CountDigit(iValue);


    }
}

class Digits
{
    public void CountDigit(int iNo)
    {
        int iNo2 = iNo;
        int iSum = 0;
        int iDigit = 0;
        int iCount[] = {0,0,0,0,0,0,0,0,0,0};
        int i = 0;
        
      

        while(iNo != 0)
        {            
            iDigit = iNo % 10;
            iNo = iNo /10;
            iCount[iDigit]++;        

        }    
     
        for(i = 0; i<= 9; i++)
        {
            System.out.println("Frequency of i is : "+iCount[i]);
        }
            
     

    }
}
