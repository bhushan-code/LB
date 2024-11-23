//check the given character present in given string

#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
{
    bool bCheck = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bCheck = true;
            break;
        }
        str++;
    }

    return  bCheck;
}


int main()
{
    char Arr[30];
    bool bRet = false;
    char cValue ='\0';
    

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character : \n");
    scanf(" %c",&cValue);                                                   //space before the %C solve problem from Program 174.c


    bRet=Check(Arr, cValue);

    if(bRet == true)
    {
        printf("Character is Present\n");
    }
    else
    {
        printf("Character is not Present\n");
    }

    return 0;
}
