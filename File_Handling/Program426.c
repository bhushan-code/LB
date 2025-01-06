#include<stdio.h>
#include<unistd.h>  
#include<fcntl.h>   

int main()
{
    char FName[30];

    printf("Enter the file name that you want to delete :\n");
    scanf("%[^'\n']s", FName);

    unlink(FName);

    return 0;
}