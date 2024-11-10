#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize)
{
    int iSum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    //Step 1 : Accept the number of element form user;
    printf("Enter number of Element : \n");
    scanf("%d",&iLength);

    //Step 2 : Allocate the memory dynamically;
    ptr = (int *)malloc(iLength * sizeof(int));

    //Step 3 : Accept the elements and store into the dyanmic memory;
    printf("Enter the Elements : \n");

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    //Step 4 : Perform the operations (Logic);
    iRet = Addition(ptr,iLength);
    printf("Addition is : %d\n",iRet);

    //Step 5 ; Deallocate the memory;
    free(ptr);

    return 0;
}


