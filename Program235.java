import java.util.*;

//accept length and width cal area

class Calculation
{    
    public float CalculateArea(float A, float B)
    {
        
        float fArea = 0.0f;
        fArea = A * B;             
        return fArea;
    }
}


class Program235
{
    public static void main(String A[])
    {
        float fNo1 = 0.0f, fNo2= 0.0f;
        float fAns = 0.0f;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Length of Rectangle :");
        fNo1 = sobj.nextFloat();
        
        System.out.println("Enter width of Rectangle :");
        fNo2 = sobj.nextFloat();


        Calculation cobj = new Calculation();
        
        fAns = cobj.CalculateArea(fNo1,fNo2);

        System.out.println("Area of Rectangle is : "+fAns);
    }
}