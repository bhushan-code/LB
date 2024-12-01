#include<iostream>
using namespace std;
////take number and if 5th position is on then turn it off and if off not problem

int ToggleBit(int iNo)
{
    int iResult =0;
    int iMask = 0x10;
    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Number after bit toggle : \n"<<iRet<<"\n";

    return 0;
}
