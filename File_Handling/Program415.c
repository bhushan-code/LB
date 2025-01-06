#include<stdio.h>
#include<unistd.h>  //
#include<fcntl.h>   //file control (all 7 system calls)

int main()
{
    int fd = 0;

    fd = creat("bhushan.txt", 0777);    //file descriptor

    if(fd == -1)
    {
        printf("Unable to create file\n");
    } 
    else
    {
        printf("File created successfully\n");
    }
    return 0;
}