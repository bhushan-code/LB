//Problem - This Program use to diplay 1 to nth  numbers

//Algorthm
/*
    START
        
    
    

    
    STOP
*/



 
 #include<stdio.h>


void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }

}



int main()
{
    int iValue = 0;
    printf("Enter number :");
    scanf("%d",&iValue);
    Display(iValue);

   return 0;
} 
 
/* 

|_______________________________________________
|CMD                                     
|_______________________________________________
|gcc Program41.c -o Myexe
|./Myexe
|Enter number : 9
|1
|2
|3
|4
|5
|6
|7
|8
|9
|
|
|
|
|________________________________________________

*/