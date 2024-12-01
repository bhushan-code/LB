import java.util.*;

//take 2 number as x and y and return x raise to y

class Arithematic
{    
    public int Power(int A, int B)
    {
        int iRet = 1;
        int iCnt = 0;
        for(iCnt = 1; iCnt <= B; iCnt++)
        {
            iRet = iRet * A;
        }
        return iRet;
    }
}


class Program236
{
    public static void main(String A[])
    {
        int iNo1 = 0, iNo2 = 0;
        int iAns = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number :");
        iNo1 = sobj.nextInt();
        
        System.out.println("Enter index:");
        iNo2 = sobj.nextInt();


        Arithematic aobj = new Arithematic();
        
        iAns = aobj.Power(iNo1,iNo2);

        System.out.println("Result : "+iAns);
    }
}