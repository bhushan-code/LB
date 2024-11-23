//find small m in given string

#include<stdio.h>

int Count(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'm')
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

    iRet=Count(Arr);

    printf("number of 'm' is : %d\n",iRet);

    return 0;
}
