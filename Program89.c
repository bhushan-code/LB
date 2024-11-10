#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iFreuency = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFreuency++;
        }
    }
    return iFreuency;
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0, iValue = 0;

    printf("Enter number of Element : \n");
    scanf("%d",&iLength);

   

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the Elements : \n");

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter number the number that you want to search: \n");
    scanf("%d",&iValue);
    
    iRet = Frequency(ptr,iLength,iValue);
    printf("Frequency of %d is : %d\n",iValue,iRet);

    free(ptr);

    return 0;
}
