//important code

#include<stdio.h>
#include<stdlib.h>  
float Average(int Arr[], int iSize)  
{
    int iCnt = 0,iSum = 0;
   
                        
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
        
    }
   
    return  ((float)iSum / (float)iSize);  //explicit type casting
}
int main()
{
     int iLength = 0,iCnt = 0;
     float fRet = 0.0f;
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

     fRet = Average(ptr,iLength);
     printf("Average is  : %f\n",fRet);

     free(ptr);



   
    return 0;
}










//output:
/*



*/