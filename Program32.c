#include<stdio.h>

int main()
{
    int iFre = 0;
    int iCnt = 0;
    
    printf("Enter Frequency : \n");
    scanf("%d",&iFre);

    
    for(iCnt = 1; iCnt<=iFre; iCnt++)
    {
        printf("%d\n",iCnt);
    }
    return 0;
}


