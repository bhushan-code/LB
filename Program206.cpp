#include<iostream>
using namespace std;


int main()
{
    int iNo = 0;
    int iMask = 0x2;                //hexadecimal
    int iResult = 0;

    cout<<"Enter the number : \n";
    cin>>iNo;

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        cout<<"Second bit is OFF\n";
    }
    else
    {
        cout<<"Second bit is ON\n";
    }

    return 0;
}
