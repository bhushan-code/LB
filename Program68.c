//Problem on N numbers

#include<stdio.h>
void Display(int *ptr)
{
    printf("Values of the array are :\n");
    int iCnt = 0;
    for(iCnt = 0; iCnt <= 3; iCnt++)
    {
        printf("%d\n",*ptr);
        ptr++;
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
    
    Display(Arr);           //Display(100)

    return 0;
}