#include<iostream>
using namespace std;

void DisplayBinary(int iNo)
{
      int iDigit = 0;

       while(iNo != 0)
        {
            iDigit = iNo % 2;
            cout<<iDigit;
            iNo = iNo / 2;
        }
        cout<<"\n";

    }

int main()
{
    int iValue = 0;
  
    cout<<"Enter the number";
    cin>>iValue;
   
    DisplayBinary(iValue);

    return 0;
}