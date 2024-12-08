//546
//15


#include<stdio.h>

int SumDigitR(int iNo)
{
    static int iSum = 0;
    if(iNo != 0)
    {
        iSum = iSum +(iNo % 10);
        iNo = iNo/10;
        SumDigitR(iNo);
    }
    return iSum;
}

int main()
{    
    int iValue = 0, iRet =0;
    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    iRet = SumDigitR(iValue);
    
    printf("Count of digit is : %d\n",iRet);
    return 0;
}