/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming laguage
    Step 4 : Write the program
    Step 5 : Test the program
*/

/* 
    Problem Statement : 
    Write a program which is used to perform ADDITION of two numbers.
*/

/*
    Step1 : Understand the problem statement
            User is going to enter the data in decimal format 
            If entered data is negative we have to convert it to positive value.  
*/

/*
    Step2 : Write the algorithm
    
    START
        Accept first input
        Accept second input
        If any of the input is negative then convert it into possitive 
        Perform the addition of that acceptes values 
        Display the addition        
    STOP
*/

/*
    Step 3 : Decide the programming language
    According to the problem statement we selected C programming.
*/

/*
    Step4 : Write the program
*/


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Additon
// Description    : It is used to perform addition of 2 float value
// Input          : Float, Float
// Output         : Float
// Author         : Bhushan Ramdas Nagpure (090LI_Bhushan)
// Date           : 06/10/2024 -> 07/09/1024
// 
///////////////////////////////////////////////////////////////////////////////////////////////////////

float Addition(float fValue1, float fValue2)
{
    float fAdd = 0.0f;                                      // Local variable for result

    if(fValue1 < 0.0f)                                      // Updater
    {
        fValue1 = -fValue1;
    }
    if(fValue2 < 0.0f)
    {
        fValue2 = -fValue2;
    }

    fAdd = fValue1 + fValue2;                               // Business Logic
    return fAdd;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// This application is used to perform additon of 2 number
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;            // Local variable for input

    printf("Enter first number : \n");
    scanf("%f",&fNo1);

    printf("Enter second number : \n");
    scanf("%f",&fNo2);
    
    fAns = Addition(fNo1, fNo2);                            // Function call

    printf("Addition is : %f\n",fAns);

    return 0;
}



/*
    Step5 : Test the Program
    
    Testcase 1
    Enter first number :
    10.0
    Enter second number :
    20.0
    Addition is : 30.000000

    Testcase 2
    Enter first number :
    -10.0
    Enter second number :
    20.0
    Addition is : 30.000000

    Testcase 3
    Enter first number :
    10.0
    Enter second number :
    -20.0
    Addition is : 30.000000

    Testcase 4
    Enter first number :
    -10.0
    Enter second number :
    -20.0
    Addition is : 30.000000
    
 */