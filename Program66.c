//Problem on N numbers

#include<stdio.h>

int main()
{
    int Arr[4];
    int iCnt = 0;
    int iSum = 0;

    printf("Please enter the value : \n");

    for(iCnt = 0; iCnt <= 3; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
        iSum = iSum + Arr[iCnt]; 
    }
    
    printf("Values from the array are : %d\n",iSum);

    return 0;
}