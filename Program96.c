
#include<stdio.h>
#include<stdlib.h>

void RevDiplay(int Arr[], int iSize)
{
   int iMin = 0, iCnt = 0;
   iMin = Arr[0];

   for(iCnt = (iSize-1); iCnt >= 0; iCnt--)                     
   {
       printf("%d\n",Arr[iCnt]);
   }
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

    RevDiplay(ptr,iLength);

    free(ptr);

    return 0;
}


