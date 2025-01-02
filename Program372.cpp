
//Singly CLL
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    public:
        PNODE head;
        PNODE tail;
        int iCount;

        SinglyCL()
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

    return 0;
}
