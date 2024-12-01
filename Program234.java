import java.util.*;

//accept length and width cal area

class Calculation
{    
    public int CalculateArea(int A, int B)
    {
        int iArea = 0;
        iArea = A * B;             
        return iArea;
    }
}


class Program234
{
    public static void main(String A[])
    {
        int iNo1 = 0, iNo2 = 0;
        int iAns = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Length of Rectangle :");
        iNo1 = sobj.nextInt();
        
        System.out.println("Enter width of Rectangle :");
        iNo2 = sobj.nextInt();


        Calculation cobj = new Calculation();
        
        iAns = cobj.CalculateArea(iNo1,iNo2);

        System.out.println("Area of Rectangle is : "+iAns);
    }
}