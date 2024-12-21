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
    struct node obj1;
    struct node obj2;
    struct node obj3;


    obj1.data = 11;
    obj2.data = 21;
    obj3.data = 51;
    
    obj1.next = &obj2;
    obj2.next = &obj3;
    obj3.next = NULL;
    

    return 0;
}