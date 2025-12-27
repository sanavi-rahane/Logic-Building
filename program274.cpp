
#include<iostream>
using namespace std;

template <class T> 

int CountFrequncy(T Arr[], int iSize,T No)
{
    int iCnt = 0;
    int iCount = 0;
   
    for(iCnt = 0; iCnt < iSize; iCnt++) 
    {
        if(Arr[iCnt] == No)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
   float Brr[] = {10.0f,20.0f,30.5f,40.0f,50.0f,10.0f};
   int iRet = 0;
   iRet = CountFrequncy(Brr,6,10.0f);

   cout<<"Frequency is :"<<iRet;
    return 0;
}

