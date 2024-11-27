#include<iostream>      //swapt tp number by pointer
using namespace std;



void Swap(int *p, int *q)
{
    int Temp = 0;
    Temp = *p;
    *p = *q;
    *q = Temp;
}

int main()
{
    int iNo1 = 0, iNo2 = 0;

    cout<<"Enter Number : \n";
    cin>>iNo1;

    cout<<"Enter Number : \n";
    cin>>iNo2;

    Swap(&iNo1, &iNo2);

    cout<<"Value of No1 after Swaping Number :"<<iNo1 <<"\n";

    cout<<"Value of No2 after Swaping Number :"<<iNo2 <<"\n";


 
    return 0;
}