#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR; 

//Time Complexity : Best Case < O(N)
//                  Worst Case O(N)
bool LinearSearch(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           break;
        }
    }

    return (iCnt == iSize); //its wrong  working oppsite

    
}  
int main()
{
    int iLength = 0,iCnt = 0,iValue = 0;
    bool bRet = false;
    IPTR iptr =NULL;
    
    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);
//  Step  1:Allocate the memory
    iptr = (IPTR)malloc(iLength * sizeof(int));
    if(NULL == iptr)
    {
        printf("Unavle to allocate memeory ");
        return -1;
    }

    printf("Enter Element :\n ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iptr[iCnt]);
    }
    printf("Enter Number to search \n");
    scanf("%d",&iValue);
//  Step 2 :Use the Memory

    bRet = LinearSearch(iptr,iLength,iValue);
    if(bRet == true)
    {
        printf("%d is present in data",iValue);
    }
    else
    {
        printf("%d is not present in data",iValue);
    }
// Step 3 :Free the memory
    free(iptr);


    return 0;
}