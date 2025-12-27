//important code

#include<stdio.h>
#include<stdlib.h>  
int Summation(int Arr[], int iSize)  
{
    int iCnt = 0,iSum = 0;
                        
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
        
    }
    return iSum;
}
int main()
{
     int iLength = 0,iCnt = 0,iRet = 0;
     int *ptr = NULL;

     printf("Enter number of Elements : ");
     scanf("%d",&iLength);  

     ptr = (int *)malloc(iLength * sizeof(int));     
     if(NULL == ptr)            //industrial way of coding
     {
        printf("Unable to allocate memory");
        return -1;  
     }
     printf("Enter the Element : \n");

     for(iCnt = 0; iCnt < iLength; iCnt++)
     {
        scanf("%d",&ptr[iCnt]);
     }

     iRet = Summation(ptr,iLength);
     printf("Addition is : %d\n",iRet);

     free(ptr);



   
    return 0;
}










//output:
/*



*/