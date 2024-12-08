//n number
//display on display

#include<stdio.h>
#include<stdlib.h>
 
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
    int *ptr = NULL;
    int iLength = 0;
    int iRet = 0;
    int iCnt = 0;

    printf("Enter the size : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof(int)*iLength);

    printf("Enter the element :");

    for(iCnt =0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    Display(ptr,iLength);

    free(ptr);
    return 0;
}