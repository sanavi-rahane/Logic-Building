//find Smallest among array
#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR; 

int Minimum(int Arr[],int iSize)
{
    int iCnt = 0,iMin = 0;  

    for(iMin = Arr[0],iCnt = 0;iCnt < iSize; iCnt++) 
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = Minimum(iptr,iLength);
   
    printf("Smallest NUmber is %d",iRet);
// Step 3 :Free the memory
    free(iptr);


    return 0;
}




