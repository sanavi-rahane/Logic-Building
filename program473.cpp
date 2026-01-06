#include<iostream>
using namespace std;
class ArrayX
{
    public:
    int *Arr;    
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

    void Accept()
    {
        int iCnt = 0;
        cout<<"Enter the Element : \n";

        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    void Display()
    {
        int iCnt = 0;
        cout<<"Elements are : \n";

        for(iCnt = 0 ;iCnt < iSize;iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
    }
};
int main()
{
    int iValue = 0;
    cout<<"Enter the number of Element : \n";
    cin>>iValue;

    // Step 1 : Allocate the memory
    ArrayX *aobj = new ArrayX(iValue);  //dynamic

    // Step 2 : use the Memory
    aobj->Accept();
    aobj->Display();

    // Step 3 : Deallocate memory
    delete aobj;
    return 0;

}

