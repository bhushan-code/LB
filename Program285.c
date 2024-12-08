//even digit


#include<stdio.h>

int CountEvenDigitR(int iNo)
{
    
    static int iCount = 0;
    int iDigit = 0;
    if(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit % 2==0)
        {
            iCount++;
        }
        iNo = iNo/10;
        CountEvenDigitR(iNo);
    }
    return iCount;
}

int main()
{    
    int iValue = 0, iRet =0;
    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    iRet = CountEvenDigitR(iValue);
    
    printf("Count of digit is : %d\n",iRet);
    return 0;
}