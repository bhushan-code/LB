//IP        : 5
//OP        : a   1   b   2   c   3   d   4   e   5

#include<stdio.h>

void Display(int iNo)
{
    char c = '\0';
    int iCnt = 0;

    for(iCnt = 1, c = 'a'; iCnt <= iNo; iCnt++,c++)
    {
        printf("%c\t%d\t",c,iCnt);
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
