//take number from user ,return count of 5,6 ,7 8 digit digit

import java.util.*;


class Program248
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
        int iCount5 = 0;
        int iCount6 = 0;
        int iCount7 = 0;
        int iCount8 = 0;

        

        while(iNo != 0)
        {            
            iDigit = iNo % 10;
            iNo = iNo /10 ;
            if(iDigit == 5)
            {
                iCount5++;
            }
            else if(iDigit == 6)
            {
                iCount6++;
            }
            else if(iDigit == 7)
            {
                iCount7++;
            }
            else if(iDigit == 8)
            {
                iCount8++;
            }
        }    
        System.out.println("Frequency of 5 is : "+iCount5);
        System.out.println("Frequency of 6 is : "+iCount6);
        System.out.println("Frequency of 7 is : "+iCount7);
        System.out.println("Frequency of 8 is : "+iCount8);

    }
}
