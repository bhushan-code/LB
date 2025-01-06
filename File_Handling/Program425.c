#include<stdio.h>
#include<unistd.h>  
#include<fcntl.h>   

int main()
{
    int fd = 0;
    char FName[30];
    int iRet = 0;
    char Arr[50] = {'\0'};

    printf("Enter the file name that you want to open :\n");
    scanf("%[^'\n']s", FName);

    fd = open(FName, O_RDWR);    

    if(fd == -1)
    {
        printf("Unable to open file\n");
    } 
    else
    {
        printf("File open successfully with FD %d\n",fd);

        iRet = read(fd,Arr,5);

        printf("%d bytes gets successfully read from the file \n",iRet);
        
        printf("Data fron the file is : %s \n", Arr);
        close(fd);
    }
    return 0;
}