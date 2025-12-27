//important code

#include<stdio.h>
#include<stdlib.h>  //for malloc and free

void Display(int Arr[], int iSize)  
{
    int iCnt = 0;
                        
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]); 
        
    }
}
int main()
{
     int iLength = 0,iCnt = 0;
     int *ptr = NULL;

     printf("Enter number of Elements : ");
     scanf("%d",&iLength);  // 5
//          to split into 4             4
     ptr = (int *)malloc(iLength * sizeof(int));     // 5 * 4=20
     printf("Enter the Element : \n");

     for(iCnt = 0; iCnt < iLength; iCnt++)
     {
        scanf("%d",&ptr[iCnt]);
     }

     Display(ptr,iLength);

     free(ptr);



   
    return 0;
}










//output:
/*



*/