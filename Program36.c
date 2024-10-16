#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("Jai Ganesh...\n");
        iCnt++;
    }
}


int main()
{
    int iFre = 0;

    printf("Entrer the Frequency : \n");
    scanf("%d",&iFre);
    
    Display(iFre);
    return 0;
}