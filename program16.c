/////////////////////////////////////////////////////////////////////////////
//
//  Required header Files
//
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>              //for input output
#include<stdbool.h>            //for bool data type

////////////////////////////////////////////////////////////////////////////
//
//  Function name:      CheckEvenOdd
//  description:        it is used to check even odd
//  Input:              Interger
//  Output :            Boolean
//  Auther :            Sanavi Devram Rahane
//  Date :              10/10/2025
/////////////////////////////////////////////////////////////////////////////
bool CheckEvenOdd(int iNo)   
{
    int iRem=0;
    iRem = iNo % 2;
    if(iRem==0)
    {    return true;  }
    else
    {   return false;   }
}

////////////////////////////////////////////////////////////////////////////
//
//  Entry point fuction of the Application
//
/////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    bool bRet = false;

    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
        printf("%d is Odd number\n",iValue);
    }
    return 0;
}

////////////////////////////////////////////////////////////////////////////
//
// Test Cases      CheckEvenOdd
//  description:        it is used to check even odd
//  Input:              Interger
//  Output :            Boolean
//  Auther :            Sanavi Devram Rahane
//  Date :              10/10/2025
/////////////////////////////////////////////////////////////////////////////