import java.util.*;

//accept mark and return percentage

class Calculation
{    
    public float Percentage(int A, int B)
    {
        
        float fResult = 0.0f;
        fResult = ((float)A / (float)B) * 100;              //type cast
        return fResult;
    }
}


class Program233
{
    public static void main(String A[])
    {
        int iNo1 = 0, iNo2 = 0;
        float fAns = 0.0f;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter obtained Marks :");
        iNo1 = sobj.nextInt();
        
        System.out.println("Enter total Marks :");
        iNo2 = sobj.nextInt();


        Calculation cobj = new Calculation();
        
        fAns = cobj.Percentage(iNo1,iNo2);

        System.out.println("Percentage is : "+fAns);
    }
}