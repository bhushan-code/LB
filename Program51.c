//Problem -  

//Algorthm
/*
    START
    iNo        

    STOP
*/

 
#include<stdio.h>




int main()
{
    int iValue = 78945;
    int iDigit = 0;

    while(iValue != 0)
    {
        iDigit = iValue % 10;
        printf("%d\n",iDigit);
        iValue = iValue / 10 ;

    }


    return 0;
}

/* 

|_______________________________________________
|CMD                                     
|_______________________________________________
|gcc Program.c -o Myexe
|./Myexe
|
|________________________________________________

*/