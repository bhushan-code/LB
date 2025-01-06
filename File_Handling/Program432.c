#include<stdio.h>
#include<unistd.h>  
#include<fcntl.h>   

int main()
{
    char FName[30];
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};
    int fd = 0;

    printf("Enter the file name that you want to OPEN :\n");
    scanf("%[^'\n']s", FName);

    fd = open(FName, O_RDONLY);

    lseek(fd,5,0);
    
    read(fd,Arr,10);

    printf("Data from the file is : %s\n",Arr);

    lseek(fd,5,1);

    read(fd,Brr,10);

    printf("Data from the file is : %s\n",Brr);

    close(fd);
    
    return 0;
}

//SEEK_SET      surawati pasun          0
//SEEK_CUR      atta jith ahe tithun    1   
//SEEK_END      sevat pasun                 2