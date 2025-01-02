#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
}

typedef struct node NODE;
typedef struct node* PNODE;

class Doubly
{
    public:
        PNODE head;
        int iCount;


        Doubly()
        {
            head = NULL;
            iCount = 0;
        }

        void Display()
        {}
        int Count()
        {
            return iCount;
        }
        void InsertFirst(int No)
        {}
        void InsertLast(int No)
        {}
        void DeleteFirst()
        {}
        void DeleteLast()
        {}
        void InsertAtPos(int No, int ipos)
        {}
        void DeleteAtPos(int ipos)
        {}


};

int main()
{    



    return 0;
}