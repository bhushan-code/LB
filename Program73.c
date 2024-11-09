//Problem on N numbers

#include<stdio.h>
void Display(int ptr[],int iSize)
{
    printf("Values of the array are :\n");
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
}

int main()
{
    int Arr[4];
    int iCnt = 0;

    printf("Please enter the value : \n");

    for(iCnt = 0; iCnt <= 3; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    Display(Arr,4);           //Display(100, 4)

    return 0;
}