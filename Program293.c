//n number
//display on display

#include<stdio.h>
 
 void Display(int Arr[],int iSize)
 {
    static int iCnt = 0;
    if(iCnt< iSize)
    {
        printf("%d\n",Arr[iCnt]);
        iCnt++;
        Display(Arr,iSize);
    }
 }

int main()
{    
    int Brr[];
    int iRet = 0;

    Display(Brr,5);

    return 0;
}