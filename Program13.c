/*
Algorith
    Start
        Accpet the obtained mark 
        Accept the total mark 
        Calculate the pecentage as (obtained / total) *100
        Display the percentage )

    Stop

*/



#include<stdio.h>

float CalculatePercentage(int iObtained, int iTotal)
{
    float fPercentage = 0.0f;
    fPercentage = (iObtained*100/iTotal);
    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    printf("Enter the obtained marks : \n");
    scanf("%d",&iValue1);

    printf("Enter the total marks : \n");
    scanf("%d",&iValue2);


    fResult = CalculatePercentage(iValue1, iValue2);

    printf("Percentage is : %f\n",fResult);

    return 0;
}