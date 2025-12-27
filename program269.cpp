#include<iostream>
using namespace std;


float Summation(float Arr[], int iSize)
{
    int iCnt = 0;
    float fSum = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        fSum = fSum + Arr[iCnt];
    }
    return fSum;
}
int main()
{
   float Brr[] = {10.0f,20.0f,30.5f,40.0f,50.0f};
   float fRet = 0.0f;

   fRet = Summation(Brr,5);

   cout<<"Summation is :"<<fRet;
    return 0;
}