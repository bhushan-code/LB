//take number from user ,return add  of digits factors

import java.util.*;


class Program244
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
        int iSum = 0;

        while(iNo != 0)
        {            
            iSum = iSum + (iNo % 10);
            
            iNo = iNo /10 ;
        }
        return iSum;
    }
}
