#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node               
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Demo1(PNODE head)
{   }

void Demo2(PPNODE head)
{   }

int main()
{
    PNODE first = NULL;

    NODE obj1;
    NODE obj2;
    NODE obj3;


    obj1.data = 11;
    obj2.data = 21;
    obj3.data = 51;
    
    obj1.next = &obj2;
    obj2.next = &obj3;
    obj3.next = NULL;
    
    first = &obj1;
    Demo1(first);   //Demo(100)
    Demo2(&first);  //Demo(50)

    return 0;
}


/*
first(100)  
50  58     
  \       
   v     
        obj1            obj2              obj3    
100+---------+     200+---------+     300+---------+
   |   11    |   ^    |    21   |   ^    |   51    |
104+---------+  /  204+---------+  /  304+---------+
   |   200   | /      |   300   | /      |  NULL   |
112+---------+     212+---------+     312+---------+

*/