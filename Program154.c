#include<stdio.h>

int Countsmll(char *ptr)
{
    int iCnt = 0;
     while(*ptr !='\0')
    {
        if(*ptr >= 97 && *ptr <= 122)
        {
        iCnt++;
        }
        ptr++;

    }
    return iCnt;
}


int main()
{
    char Arr[30];
    int iRet = 0;
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr); 

    iRet = Countsmll(Arr);
    printf("Counte of small letters : %d\n",iRet);

    return 0;
}