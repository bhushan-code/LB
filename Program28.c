//Problem : Print Jai Ganesh on Console 4 times

//Algorithm : write loop and print 4 times 


#include<stdio.h>


int main()
{   
    int iCnt = 0;
    int iFrequency = 0;
    printf("Enter frequency :\n");
    scanf("%d",&iFrequency);



    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("Jai Ganesh...\n");
    }

 
    return 0;
}