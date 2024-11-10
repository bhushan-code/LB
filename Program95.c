//no type cast

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
   int iMin = 0, iCnt = 0;
   iMin = Arr[0];

   for(iCnt = 0; iCnt < iSize; iCnt++)                      //can be iCnt start will 1
   {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }

   }
   return iMin;
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

    iRet = Minimum(ptr,iLength);
    printf("Min of all the elements is : %d\n",iRet);

    free(ptr);

    return 0;
}


