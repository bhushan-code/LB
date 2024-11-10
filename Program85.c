#include<stdio.h>
#include<stdlib.h>

int AdditionEven(int Arr[], int iSize)
{
    int iSum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
        iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter number of Element : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the Elements : \n");

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = AdditionEven(ptr,iLength);
    printf("Addition of Even elements is : %d\n",iRet);

    free(ptr);

    return 0;
}

