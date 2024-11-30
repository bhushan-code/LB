#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iResult = 0;
    int iMask = 0x2;

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}


int main()
{
    int iValue = 0;
    bool iRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

   iRet = CheckBit(iValue);

    if(iRet == true)
    {
        cout<<"Second bit is ON\n";
    }
    else
    {
        cout<<"Second bit is OFF\n";
    }

    return 0;
}
