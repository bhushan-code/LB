//Problem - take number from user and display all its factors with better time complexity

//Algorthm
/*
    START
    iNo        

    STOP
*/

 
#include<stdio.h>

void DisplayFactor(int iNo)                        
{
    int iCnt = 0;
    
    printf("Factors of %d are : \n",iNo);

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }   
}


int main()
{
    int iValue = 0;
    
    printf("Enter the number : ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    
    return 0;
} 

//O(N/2)

 
/* 

|_______________________________________________
|CMD                                     
|_______________________________________________
|gcc Program.c -o Myexe
|./Myexe
|Enter the number ; 12
|Factors of 12 are :1   2   3   4   6
|
|________________________________________________

*/