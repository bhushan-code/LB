import java.util.*;

class Test
{
    public static void main(String Arg[])
    {
        int iNo = 0;
    

        System.out.println("Enter the number:");
        Scanner sobj = new Scanner(System.in);
        iNo = sobj.nextInt();

        Check cobj = new Check(iNo);
        int iRet = cobj.CountDigit();
        
        System.out.println(iRet);
    }
}

class Check
{
    public int iNo1;
    int Count;

    Check(int A)
    {
        iNo1 = A;
        Count = 0;
    }
    int CountDigit()
    {
        if(iNo1 != 0)
        {
            iNo1 = iNo1/10;
            Count++;
            CountDigit();
        }
        return Count;   
    }
}