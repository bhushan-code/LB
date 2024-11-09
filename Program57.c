
//only even digit count


#include<stdio.h>


int CountEvenDigit(int iNo)
{
    int iCnt = 0; 
    int iDigit = 0;

     if(iNo < 0)
    {
        iNo = -iNo;                   }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10 ;
    }
    return iCnt;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number \n");
    scanf("%d", &iValue);

    iRet = CountEvenDigit(iValue);

    printf("Number of digits are : %d \n",iRet);

    return 0;
}