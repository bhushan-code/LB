//take number and print addition of even digit


#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0, iRev =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;            //for reverse
        iNo = iNo / 10;
    }
    return iRev;
}



int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("Summetion is : %d\n",iRet);

    return 0;
}