//find Smallest among array
#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR; 

void ReverseDisplay(int Arr[],int iSize)
{
    int iCnt = 0;
    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        printf("%d\t",Arr[iCnt]);
    }
}


int main()
{
    int iLength = 0,iCnt = 0;
    
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

    ReverseDisplay(iptr,iLength);
  
// Step 3 :Free the memory
    free(iptr);


    return 0;
}




