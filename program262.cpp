#include<iostream>
using namespace std;

template <class T>

T Add(T No1,T No2)
{
    T Add;
    Add = No1 + No2;
    return Add;
}

int main()
{
    int iValue1 = 10, iValue2 = 11,iRet = 0;

    iRet = Add(iValue1,iValue2);

    cout<<iRet;
    return 0;
}