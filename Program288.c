//
//countcapital

#include<stdio.h>

int CountCapitalI(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >= 'A'&& *str <='Z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
} 

int main()
{    
    char Arr[30];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapitalI(Arr);
    printf("String lenght is : %d\n",iRet);

    return 0;
}