//IP      : 5
//OP        : a   b   c   d   e

#include<stdio.h>

void Display(int iNo)
{
    char c = 'a';
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",c);
        c++;
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
