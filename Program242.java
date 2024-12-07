//take number from user ,return multiplication  of digits factors

import java.util.*;


class Program242
{
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);
        
        int iValue = 0, iRet = 0;
        
        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        iRet = dobj.MultiplicationDigit(iValue);

        System.out.println("Multiplication of Digit is : "+iRet);
    }
}

class Digits
{
    public int MultiplicationDigit(int iNo)
    {
        int iDigit = 0;
        int iMulti = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit != 0)
            {
                iMulti = iMulti * iDigit;
            }
            
            iNo = iNo /10 ;
        }
        return iMulti;
    }
}
