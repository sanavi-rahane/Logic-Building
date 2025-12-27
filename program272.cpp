#include<iostream>
using namespace std;

template <class T>
T Summation(T Arr[], int iSize)
{
    int iCnt = 0;
    T Sum;
    for(iCnt = 1, Sum =Arr[0]; iCnt < iSize; iCnt++) //sum is initilised by Arr[0]
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}
int main()
{
   float Brr[] = {10.0f,20.0f,30.5f,40.0f,50.0f};
   float fRet = 0.0f;

   fRet = Summation(Brr,5);

   cout<<"Summation is :"<<fRet;
    return 0;
}

