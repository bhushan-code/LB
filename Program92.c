//no type cast

#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iSum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return (iSum/iSize);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;
    float fRet = 0;

    printf("Enter number of Element : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the Elements : \n");

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Average(ptr,iLength);
    printf("Average of all the elements is : %f\n",fRet);

    free(ptr);

    return 0;
}


