//54645
//5


#include<stdio.h>

int CountDigitsR(int iNo)
{
    static int iCount = 0;
    if(iNo != 0)
    {
        iNo = iNo/10;
        iCount++;
        CountDigitsR(iNo);
    }
    return iCount;
}

int main()
{    
    int iValue = 0, iRet =0;
    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    iRet = CountDigitsR(iValue);
    
    printf("Count of digit is : %d\n",iRet);
    return 0;
}