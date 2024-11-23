#include<stdio.h>

int CountVowel(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O'|| *str == 'U')
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

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet=CountVowel(Arr);

    printf("Count is : %d\n",iRet);

    return 0;
}
