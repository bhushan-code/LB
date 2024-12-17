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

void InsertFirst(PPNODE head, int No)
{

}

void Display(PNODE head)
{

}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first, 51);
    InsertFirst(&first, 21);
    InsertFirst(&first, 11);

    Display(first);
    
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