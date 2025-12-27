//find largest among array
#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR; 

int Maximum(int Arr[],int iSize)
{
    int iCnt = 0,iMax = 0;  

    for(iMax = Arr[0],iCnt = 0;iCnt < iSize; iCnt++) //best way to initilize
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum(iptr,iLength);
   
    printf("Largest NUmber is %d",iRet);
// Step 3 :Free the memory
    free(iptr);


    return 0;
}




/*
PS D:\VIT\Marvellous DSA\C_Programming\Classwork\day> ./a.exe
Enter the number of elements :
5
Enter Element :
 -11
-9
-51
-21
-11
Largest NUmber is -9
PS D:\VIT\Marvellous DSA\C_Programming\Classwork\day> ./a.exe
Enter the number of elements :
5
Enter Element :
 -9
14
18
-21
56
Largest NUmber is 56
*/