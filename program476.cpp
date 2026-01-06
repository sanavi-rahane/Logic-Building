#include<iostream>
using namespace std;
class ArrayX
{
    public:
        int *Arr;    
        int iSize;

        ArrayX(int no);
        ~ArrayX();
        void Accept();
        void Display();
        int Addition();
        int Maximum();
        
    };

ArrayX :: ArrayX(int no)
{
    cout<<"Inside constructor\n";
    iSize = no;
    Arr = new int[iSize];
}

ArrayX:: ~ArrayX()
{
        cout<<"Inside destructor\n"; 
    delete [] Arr;
}

void ArrayX :: Accept()
{
    int iCnt = 0;
    cout<<"Enter the Element : \n";

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void ArrayX :: Display()
{
    int iCnt = 0;
    cout<<"Elements are : \n";

    for(iCnt = 0 ;iCnt < iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int ArrayX :: Addition()
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}
int ArrayX :: Maximum()
{
    int iMax = 0;
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}
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

    cout<<"Summation of all Elements : "<<aobj->Addition()<<"\n";
    cout<<"Maximum is : "<<aobj->Maximum()<<"\n";

    // Step 3 : Deallocate memory
    delete aobj;
    return 0;

}

