//take number and print addition of even digit


#include<stdio.h>

int SumEvenDigit(int iNo)
{
    int iDigit = 0, iSum =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSum = iSum + iDigit;
        }
        iNo = iNo / 10;
    }

    return iSum;
}



int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = SumEvenDigit(iValue);

    printf("Summetion is : %d\n",iRet);

    return 0;
}