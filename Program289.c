//
//countcapital

#include<stdio.h>

int CountCapitalR(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        if(*str >= 'A'&& *str <='Z')
        {
            iCount++;
        }
        str++;
        CountCapitalR(str);
    }
    return iCount;
} 

int main()
{    
    char Arr[30];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapitalR(Arr);
    printf("String lenght is : %d\n",iRet);

    return 0;
}