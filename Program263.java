//addition of n number
import java.util.*;



class Program263
{
    public static void main(String A[])
    {
        int iSize = 0, i = 0, iRet = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter the size of array : ");          
        iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);   
        aobj.Accept();
        aobj.Display();  
        aobj.CountDigit();
        aobj.Display();  

    }
}



class ArrayX
{
    public int Arr[];
     
    ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    Scanner sobj = new Scanner(System.in);

    public void Accept()
    {
        int i = 0;

        System.out.println("Enter the Elements :");

        for(i = 0; i < Arr.length; i++)
        {
            Arr[i]=sobj.nextInt();
        }
    }
    public void Display()
    {
        int i = 0;

        System.out.println("Entered Elements :");

        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
 
    public void CountDigit()
    {
        int i = 0, iCnt = 0;

        for(i = 0; i < Arr.length; i++)
        {
            while(Arr[i] != 0)
            {
                Arr[i] = Arr[i]/10;                                     //whole array become0,0,0,0,00,0,0
                iCnt++;
            }         
            System.out.println(iCnt);   
            iCnt = 0;
        }
    }
}