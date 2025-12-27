//Write a program to count the frequnecy of a number in a give numbers
#include<stdio.h>
#include<stdlib.h>
typedef int * IPTR; 
int FrequencyCalculate(int Arr[],int iSize,int iNo)
{
    int iFrequency = 0,iCnt = 0;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}  
int main()
{
    int iLength = 0,iCnt = 0,iRet = 0,iValue = 0;
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
    printf("Enter Which Number frequency want to calculate:");
    scanf("%d",&iValue);
//  Step 2 :Use the Memory

    iRet = FrequencyCalculate(iptr,iLength,iValue);
    printf("Frequency of %d is : %d\n",iValue,iRet);

// Step 3 :Free the memory
    free(iptr);


    return 0;
}