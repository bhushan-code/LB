//546
//15


#include<stdio.h>

int SumDigitI(int iNo)
{
    int iSum = 0;
    while(iNo != 0)
    {
        iSum = iSum +(iNo % 10);
        iNo = iNo/10;
    }
    return iSum;
}

int main()
{    
    int iValue = 0, iRet =0;
    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    iRet = SumDigitI(iValue);
    
    printf("Count of digit is : %d\n",iRet);
    return 0;
}