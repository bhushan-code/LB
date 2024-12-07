//take number from user ,return add  of digits factors

import java.util.*;


class Program243
{
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);
        
        int iValue = 0, iRet = 0;
        
        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        iRet = dobj.AdditionDigit(iValue);

        System.out.println("Addition  of Digit is : "+iRet);
    }
}

class Digits
{
    public int AdditionDigit(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;
            
            iNo = iNo /10 ;
        }
        return iSum;
    }
}
