import java.util.*;

class Program229
{
    public static void main(String A[])
    {
        int No1 = 0, No2 = 0, Ans = 0;

    
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number :");
        No1 = sobj.nextInt();

        System.out.println("Enter the second number :");
        No2 = sobj.nextInt();
        
        Ans = No1 + No2;

        System.out.println("Additon is : "+Ans);
    }
}