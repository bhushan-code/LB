

#include<stdio.h>

void Update(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == 'a')
        {
            *str = 'd';
        }   
        str++;
    }
}


int main()
{
    char Arr[30];
    char cValue ='\0';
    
    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    Update(Arr, cValue);

    printf("String after upadation : %s\n",Arr);        //call by address change the actual data that why this string changed in main function

    return 0;
}
