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
      

        while(iNo != 0)
        {            
            iDigit = iNo % 10;
            iNo = iNo /10 ;

            if(iDigit == 0)
            {
                iCount[0]++;
            }
            else if(iDigit == 1)
            {
                iCount[1]++;
            }
            else if(iDigit == 2)
            {
                iCount[2]++;
            }
            else if(iDigit == 3)
            {
                iCount[3]++;
            }
            else if(iDigit == 4)
            {
                iCount[4]++;
            }
            else if(iDigit == 5)
            {
                iCount[5]++;
            }
            else if(iDigit == 6)
            {
                iCount[6]++;
            }
            else if(iDigit == 7)
            {
                iCount[7]++;
            }
            else if(iDigit == 8)
            {
                iCount[8]++;
            }
            else if(iDigit == 9)
            {
                iCount[9]++;
            }
           

        }    
        System.out.println("Frequency of 0 is : "+iCount[0]);
        System.out.println("Frequency of 1 is : "+iCount[1]);
        System.out.println("Frequency of 2 is : "+iCount[2]);
        System.out.println("Frequency of 3 is : "+iCount[3]);
        System.out.println("Frequency of 4 is : "+iCount[4]);
        System.out.println("Frequency of 5 is : "+iCount[5]);
        System.out.println("Frequency of 6 is : "+iCount[6]);
        System.out.println("Frequency of 7 is : "+iCount[7]);
        System.out.println("Frequency of 8 is : "+iCount[8]);
        System.out.println("Frequency of 9 is : "+iCount[9]);

    }
}