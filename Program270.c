#include<stdio.h>

void DisplayR()
{
    static int iCnt = 1;               

    if(iCnt <= 4)
    {
        printf("*\n");
        iCnt++;
        DisplayR();              
    }
}

int main()
{    
    printf("Inside main")
    DisplayR();
    printf("End of main")

    return 0;
}