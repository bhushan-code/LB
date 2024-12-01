#include<iostream>
using namespace std;
////take number and if 5th position is on then turn it off and if off not problem

int OffBit(int iNo, int iPos)
{
    int iResult =0;
    int iMask = 0xfffffef;

    iResult = iNo & iMask;
    
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

    iRet = OffBit(iValue, iPos);

    cout<<"Number after bit off : \n"<<iRet<<"\n";

    return 0;
}
