#include<iostream>
using namespace std;
//finding 17th bit on or not 

//  0000    0000    0000    0001    0000    0000    0000    0000                                   
//     0       0       0       1       0       0       0       0

//hexadecimal = 0x00010000

bool CheckBit(int iNo)
{
    int iResult = 0;
    int iMask = 0x00010000;                            

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
        cout<<"17th bits is ON\n";
    }
    else
    {
        cout<<"17th bits is OFF\n";
    }

    return 0;
}

