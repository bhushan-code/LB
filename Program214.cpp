#include<iostream>
using namespace std;
//finding 7th and 3rd bit on or not 

//   0100    0100                                   
//     4       4

//hexadecimal = 0x44

bool CheckBit(int iNo)
{
    int iResult = 0;
    int iMask = 0x44;                            

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
        cout<<"3rd and 7th bits is ON\n";
    }
    else
    {
        cout<<"3rd and 7th bits is OFF\n";
    }

    return 0;
}

