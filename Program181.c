//convert case

#include<stdio.h>

void strtoggleX(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str >= 'a'&& *str <= 'z')
        {
            *str = *str - 32;
        }
        else if(*str >= 'A'&& *str <= 'Z')
        {
            *str = *str + 32;
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

    strtoggleX(Arr, cValue);

    printf("String after upadation : %s\n",Arr);        //call by address 
                                                        //change the actual data that why this string changed in main function

    return 0;
}
