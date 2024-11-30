#include<iostream>
using namespace std;
//finding 8th bit on or not 


//8      7     6    5    4   3   2   1             8th bit is 128
//1      0     0    0    0   0  0    0              //binary of 128
//128   64    32   16   8   4   2    1 
 

//128 convert to hexadecimal = ox80

bool CheckBit(int iNo)
{
    int iResult = 0;
    int iMask = 0x80;

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
        cout<<"8 bit is ON\n";
    }
    else
    {
        cout<<"8 bit is OFF\n";
    }

    return 0;
}

