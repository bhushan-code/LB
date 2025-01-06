#include<stdio.h>
#include<unistd.h>  
#include<fcntl.h>   

int main()
{
    char Name[30];
    char Arr[10] = {'\0'};
    int iRet = 0;

    int fd = 0;

    printf("Enter the file name that you want to OPEN :\n");
    scanf("%[^'\n']s", Name);

    fd = open(Name, O_RDONLY);

    
    iRet = read(fd,Arr,10);
    printf("Number of bytes read : %d\n",iRet);
    
    iRet = read(fd,Arr,10);
    printf("Number of bytes read : %d\n",iRet);
    
    iRet = read(fd,Arr,10);
    printf("Number of bytes read : %d\n",iRet);

    iRet = read(fd,Arr,10);
    printf("Number of bytes read : %d\n",iRet);

    close(fd);
    
    return 0;
}
