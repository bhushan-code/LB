import java.util.*;

class Arithematic
{    
    public int Additon(int A, int B)
    {
        int iResult = 0;
        iResult = A + B;
        return iResult;
    }
}


class Program231
{
    public static void main(String A[])
    {
        int No1 = 0, No2 = 0, Ans = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number :");
        No1 = sobj.nextInt();

        System.out.println("Enter the second number :");
        No2 = sobj.nextInt();

        Arithematic aobj = new Arithematic();
        
        Ans = aobj.Additon(No1, No2);

        System.out.println("Additon is : "+Ans);
    }
}