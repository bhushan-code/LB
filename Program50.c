//Problem - take number from user and number is perfect number or not
//Algorthm
/*
    START
    iNo        

    STOP
*/

 
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)                        
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iValue = 0;
    bool bRet = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
  
    if(bRet == true)
    {
        printf("%d is a perfect number \n",iValue);
    }
    else 
    {
        printf("%d is  not a perfect number \n",iValue);
    }
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