//IP      : 5
//OP        : a   b   c   d   e

#include<stdio.h>

void Display(int iNo)
{
    char c = '\0';
    int iCnt = 0;

    for(iCnt = 1, c = 97; iCnt <= iNo; iCnt++,c++)
    {
        printf("%c\t",c);
    }
    
    printf("\n");
}


int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
