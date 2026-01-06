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
    // Step 1 : Allocate the memory
    ArrayX *aobj = new ArrayX(10);  //dynamic

    // Step 2 : use the Memory
    //LB 

    // Step 3 : Deallocate memory
    delete aobj;
    return 0;

}


/*
PS D:\LB> g++ program472.cpp
PS D:\LB> ./a.exe
Inside constructor
Inside destructor
*/