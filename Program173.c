//count m in given string

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
    

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);


    iRet=CountVowel(Arr, 'm');

    printf("Count is : %d\n",iRet);

    return 0;
}
