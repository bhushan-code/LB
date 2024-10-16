/*
    START
        Accept the percentage for user
        If percentage are less than 40 then Display FAIL
        If it is greater than 40 then PASS
    STOP

*/


#include<stdio.h.>

void DisplayResult(float fPercentage)
{
    if (fPercentage < 0.0f || fPercentage > 100.0f)                          //Filter
    {
        printf("Invalid percentage, Please enter in the range 0 to 100\n");
        return;
    }

    if (fPercentage >= 40.00f)
    {
        printf("You are PASS\n");
    }
    else
    {
        printf("You are FAIL\n");
    }
}




int main()
{
    float fValue = 0.0f;

    printf("Enter the percentage\n");
    scanf("%f", &fValue);

    DisplayResult(fValue);

    return 0;
}




