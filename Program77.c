//Problem on N numbers
#include<stdio.h>
#include<stdlib.h>

void ___________(int Arr[], int iSize)
{
    //Logic;
}

int main()
{
    int iLength = 0, iCnt =0;
    int *ptr = NULL;
    

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
  
    ___________(ptr, iLength);

    free(ptr);

    return 0;
}

/*
    Step 1 : Accept the number of element form user;
    Step 2 : Allocate the memory dynamically;
    Step 3 : Accept the elements and store into the dyanmic memory;
    Step 4 : Perform the operations (Logic);
    Step 5 ; Deallocate the memory;
*/