import java.util.*;

class Arithematic
{
    public int iValue1;
    public int iValue2;

    Arithematic(int A, int B)
    {
        iValue1 = A;
        iValue2 = B;
    }
    
    public int Additon()
    {
        int iResult = 0;
        iResult = iValue1 + iValue2;
        return iResult;
    }
}


class Program232
{
    public static void main(String A[])
    {
        int iNo1 = 0, iNo2 = 0, iAns = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number :");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the second number :");
        iNo2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iNo1, iNo2);
        
        iAns = aobj.Additon();

        System.out.println("Additon is : "+iAns);
    }
}