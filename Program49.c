//Problem - take number from user and number is perfect number or not
//Algorthm
/*
    START
    iNo        

    STOP
*/

 
#include<stdio.h>

int SumFactor(int iNo)                        
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }   
    return iSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = SumFactor(iValue);
    
    printf("Summetion of factor is % d \n",iRet);
    return 0;
} 

//O(N/2)

 
/* 

|_______________________________________________
|CMD                                     
|_______________________________________________
|gcc Program.c -o Myexe
|./Myexe
|Enter the number : 8
|summetion of factor is 7
|________________________________________________

*/