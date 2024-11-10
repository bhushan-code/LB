#include<stdio.h>
#include<stdlib.h>

void AdditionEvenOdd(int Arr[], int iSize)
{
    int iSumE = 0, iSumO = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iSumE = iSumE + Arr[iCnt];
        }
        else
        {
            iSumO = iSumO + Arr[iCnt];
        }
    }
    printf("Addition of Even elemet : %d\n",iSumE);
    printf("Addition of Odd elemet : %d\n",iSumO);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;

    printf("Enter number of Element : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the Elements : \n");

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    AdditionEvenOdd(ptr,iLength);

    free(ptr);

    return 0;
}


