//Doubly CLL
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCL
{
    public:
        PNODE head;
        PNODE tail;
        int iCount;

        DoublyCL()
        {
            head = NULL;
            tail = NULL;
            iCount = 0;
        }

        void Display()
        {}

        int Count()
        {
            return iCount;
        }

        void InsertFirst(int no){}
        void InsetLast(int no){}

        void DeleteFirst(int no){}
        void DeleteLast(int no){}

        void InsertAtPos(int no, int ipos){}
        void DeleteAtPos(int ipos){}      
};


int main()
{

    
    InsertFirst(51);
    InsertFirst(21);
    InsertFirst(11);

    InsertFirst(101);
    InsertFirst(111);
    InsertFirst(121);

    return 0;
}