//Problem - take number from user and check whether it is divisiible by 3 or not

//Algorthm
/*
    START

    STOP
*/



 
#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)                        
{
    int iResult = 0;
    iResult = iNo % 3;

    if(iResult == 0)
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
    bool bFlag = false;
    
    printf("Enter the number :");
    scanf("%d",&iValue);

    bFlag = CheckDivisible(iValue);                   

    if(bFlag == true)
        {
            printf("%d is divisible by 3 \n", iValue);
        }
    else
        {
            printf("%d is not divisible by 3 \n", iValue);

        }
    return 0;
} 


 
/* 

|_______________________________________________
|CMD                                     
|_______________________________________________
|gcc Program.c -o Myexe
|./Myexe
|Enter the number : 5
|5 is not divisible by 3
|./Myexe
|Enter the number : 8
|8 is not divisible by 3
|________________________________________________

*/