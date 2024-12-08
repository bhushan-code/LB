//54645
//5


#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo%10;
        iNo = iNo/10;
        iCount++;
    }
    return iCount;
}

int main()
{    
    int iValue = 0, iRet =0;
    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    
    printf("Count of digit is : %d\n",iRet);
    return 0;
}