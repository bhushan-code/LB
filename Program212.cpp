#include<iostream>
using namespace std;
//finding 10th bit on or not 

//0010   0000    0000                                   
// 2      0       0

//hexadecimal = ox200

bool CheckBit(int iNo)
{
    int iResult = 0;
    int iMask = 0x200;

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
        cout<<"10 bit is ON\n";
    }
    else
    {
        cout<<"10 bit is OFF\n";
    }

    return 0;
}

