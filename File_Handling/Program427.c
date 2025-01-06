#include<stdio.h>
#include<unistd.h>  
#include<fcntl.h>   

int main()
{
    char FName[30];
    char Arr[20] = {'\0'};
    int fd = 0;

    printf("Enter the file name that you want to OPEN :\n");
    scanf("%[^'\n']s", FName);

    fd = open(FName, O_RDONLY);

    read(fd,Arr,8);

    printf("Data from the file is : %s\n",Arr);

    return 0;
}