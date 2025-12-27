#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0,iCnt = 0;
    int *iptr =NULL;
    
    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);
//  Step  1:Allocate the memory
    iptr = (int *)malloc(iLength * sizeof(int));
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
//  Call to the function which contains Business Logic
//  Fun(itpr,iLength);
// Step 3 :Free the memory
    free(iptr);


    return 0;
}