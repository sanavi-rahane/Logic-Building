#include<stdio.h>
#include<stdlib.h>
typedef int * IPTR; 
int FrequencyCalculate(int Arr[],int iSize)
{
    int iFrequency = 0,iCnt = 0;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}  
int main()
{
    int iLength = 0,iCnt = 0,iRet = 0;
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
//  Step 2 :Use the Memory

    iRet = FrequencyCalculate(iptr,iLength);
    printf("Frequency of 11 is : %d\n",iRet);

// Step 3 :Free the memory
    free(iptr);


    return 0;
}