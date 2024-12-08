//even digit


#include<stdio.h>

int CountEvenDigitI(int iNo)
{
    
    int iCount = 0;
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit % 2==0)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;
}

int main()
{    
    int iValue = 0, iRet =0;
    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    iRet = CountEvenDigitI(iValue);
    
    printf("Count of digit is : %d\n",iRet);
    return 0;
}