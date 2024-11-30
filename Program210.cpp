#include<iostream>
using namespace std;
//finding 5th bit on or not 

//64    32   16   8   4   2   1
//7     6    5    4   3   2   1             5th bit is 16
//0     0    1    0   0  0    0

 

//16 convert to hexadecimal = ox10

bool CheckBit(int iNo)
{
    int iResult = 0;
    int iMask = 0x10;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
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
        cout<<"5 bit is ON\n";
    }
    else
    {
        cout<<"5 bit is OFF\n";
    }

    return 0;
}

