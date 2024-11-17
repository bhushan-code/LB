#include<stdio.h>

int strlnX(char *ptr)
{
    int iCnt = 0;
     while(*ptr !='\0')
    {
        iCnt++;
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

    iRet = strlnX(Arr);
    printf("Enter String : %d\n",iRet);

    return 0;
}