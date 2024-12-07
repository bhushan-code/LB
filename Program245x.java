//take number from user ,return count of each digit digit

import java.util.*;


class Program245
{
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);
        
        int iValue = 0;
        
        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        dobj.AdditionDigit(iValue);


    }
}

class Digits
{
    public void CountDigit(int iNo)
    {
        int iSum = 0;
        int iDigit = 0;
        int iCount = 0;
        int Arr[];
        int iCheck =0;
        int iCnt = 0;

        while(iNo != 0)
        {            
            iDigit = iNo % 10;
            Arr[iCnt] = iDigit;
            iNo = iNo /10 ;
            iCount++;
            iCnt++;
        }

        for(iCnt = 0; iCnt < iCount; iCnt++)
        {
            if(Arr[0]==Arr[iCnt])
            {
                iCheck++;
            }
        }
            System.out.println(Arr[0]+":"+iCheck);
    }
}
