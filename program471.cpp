#include<iostream>
using namespace std;
class ArrayX
{
    public:
    int *Arr;    // int Arr[];
    int iSize;

    ArrayX(int no)
    {
        cout<<"Inside constructor\n";
        iSize = no;
        Arr = new int[iSize];
    }

    ~ArrayX()
    {
         cout<<"Inside destructor\n"; 
        delete [] Arr;
    }
};
int main()
{
    ArrayX *aobj = new ArrayX(10);//dynamic
    return 0;

}


/*
PS D:\LB> g++ program471.cpp
PS D:\LB> ./a.exe
Inside constructor
*/