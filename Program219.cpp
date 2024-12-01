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


int main()
{
    int iValue = 0;
    int iPos = 0;
    int iMask = 0x1;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the position : \n";
    cin>>iPos;

    iMark = iMark << (iPos-1)

    return 0;
}

