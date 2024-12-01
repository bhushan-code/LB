#include<iostream>
using namespace std;
//take number and position of bit and 
//check users bit is on ro not 
//
// iPos =9

// iMarks = 0000    0000    0000    0000    0000    0000    0000    0001                                   
//             0       0       0       0       e       0       0       0      

//  iMask = iMask << (ipos -1)
//  iMask = iMask << 8
//
//  iMarks = 0000    0000    0000    0000    0000    0001    0000    0000

//hexadecimal = 0x0000e000

bool CheckBit(int iNo, int iPos)
{
    int iMask = 0x1;
    int iResult= 0;
    //add filter for iPos max 32 (32 max bits)

    iMask = iMask << (iPos-1);                  //left shift  (created dynamic mask)

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
    int iValue = 0, iLocation = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iLocation;

    bRet = CheckBit(iValue,iLocation);

    if(bRet == true)
    {
        cout<<"Bit is ON\n";
    }
    else 
    {
        cout<<"Bit is OFF\n";
    }

    return 0;
}

