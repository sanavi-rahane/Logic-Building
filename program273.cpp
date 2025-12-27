//largest among N number
#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int iSize)
{
    int iCnt = 0;
    T Max;
    Max =Arr[0];
    for(iCnt = 1; iCnt < iSize; iCnt++) 
    {
        if(Max < Arr[iCnt])
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}
int main()
{
   float Brr[] = {10.0f,20.0f,30.5f,40.0f,50.0f};
   float fRet = 0.0f;

   fRet = Maximum(Brr,5);

   cout<<"Summation is :"<<fRet;
    return 0;
}

