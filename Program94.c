

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
   int iMax = 0, iCnt = 0;
   iMax = Arr[0];

   for(iCnt = 0; iCnt < iSize; iCnt++)                  //can be iCnt start will 1
   {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }

   }
   return iMax;
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

    iRet = Maximum(ptr,iLength);
    printf("Max of all the elements is : %d\n",iRet);

    free(ptr);

    return 0;
}


