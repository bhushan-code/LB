//count given character in given string

#include<stdio.h>

int CountVowel(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return  iCount;
}


int main()
{
    char Arr[30];
    int iRet = 0;
    char cValue ='\0';
    

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character : \n");
    scanf(" %c",&cValue);                                                   //space before the %C solve problem from Program 174.c


    iRet=CountVowel(Arr, cValue);

    printf("number of occurance is : %d\n",iRet);

    return 0;
}
