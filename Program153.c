#include<stdio.h>

int Count(char *ptr)
{
    int iCnt = 0;
     while(*ptr !='\0')
    {
        if(*ptr == 'a')
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

    iRet = Count(Arr);
    printf("Counte of a is : %d\n",iRet);

    return 0;
}