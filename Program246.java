//take number from user ,return count of 7 digit digit

import java.util.*;


class Program246
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
        int iSum = 0;
        int iDigit = 0;
        int iCount = 0;
        

        while(iNo != 0)
        {            
            iDigit = iNo % 10;
            iNo = iNo /10 ;
            if(iDigit == 7)
            {
                iCount++;
            }
        }    
        System.out.println("Frequency of 7 is : "+iCount);
    }
}
