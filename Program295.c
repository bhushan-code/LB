#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node                 //self referancial structure
{
    int data;
    struct node *next;
};


int main()
{
    struct node obj;
    printf("size of node is : %d",sizeof(obj));

    return 0;
}