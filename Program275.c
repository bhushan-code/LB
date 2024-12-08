//4
//4321


#include<stdio.h>

void DisplayI(int iNo)
{
    while(iNo >= 1)
    {
        printf("%d\t",iNo);
        iNo--;
    }
}

int main()
{    
    int iValue = 0;
    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    DisplayI(iValue);
    printf("\n");
    return 0;
}