//Problem : Print Jai Ganesh on Console 4 times

//Algorithm : write loop and print 4 times 


#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Jai Ganesh...\n");
    }
}

int main()
{   
   int iFrequency = 0;

    printf("Enter frequency :\n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

 
    return 0;
}