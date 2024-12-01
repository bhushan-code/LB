#include<iostream>
using namespace std;
//finding 14, 15, 16th bit on or not 

//  0000    0000    0000    0000    1110    0000    0000    0000                                   
//     0       0       0       0       e       0       0       0            

//hexadecimal = 0x0000e000

bool CheckBit(int iNo)
{
    int iResult = 0;
    int iMask = 0xe000;                            

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
        cout<<"14, 15, 16th bits is ON\n";
    }
    else
    {
        cout<<"14, 15, 16th bits is OFF\n";
    }

    return 0;
}

