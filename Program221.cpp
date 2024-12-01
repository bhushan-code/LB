#include<iostream>
using namespace std;
////take number and if 5th position is on then turn it off and if off not problem


int main()
{
    int iValue = 0;
    int iMask = 0x10;
    int iResult =0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iResult = iValue ^ iMask;

    cout<<"Number after bit toggle : \n"<<iResult<<"\n";

    return 0;
}
