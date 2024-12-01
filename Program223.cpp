#include<iostream>
using namespace std;
////take number and toggle  5th position

int ToggleBit(int iNo, int iPos)
{
    int iResult =0;
    int iMask = 0x1;

    iMask = iMask<<(iPos-1);
    
    iResult = iNo ^ iMask;
    
    return iResult;
}

int main()
{
    int iValue = 0, iPos = 0;
    int iRet = 0;
    

    cout<<"Enter the number : \n";
    cin>>iValue;

     cout<<"Enter the position : \n";
    cin>>iPos;

    iRet = ToggleBit(iValue, iPos);

    cout<<"Number after bit toggle : \n"<<iRet<<"\n";

    return 0;
}

