//


#include<stdio.h>

int strlenX(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        iCount++;
        str++;
        strlenX(str);
    }
    return iCount;
}

int main()
{    
    char Arr[30];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);
    printf("String lenght is : %d\n",iRet);

    return 0;
}