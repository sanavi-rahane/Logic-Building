//Iteration
#include<stdio.h>
int main()
{
    int iNo = 0;
    int iDigits = 0;

    printf("Enter NUmber : \n");
    scanf("%d",&iNo);

    printf("-------------------------------------\n");
    printf("Original Value of iNo is : %d\n",iNo);

    while (iNo != 0)  
    {
        printf("-------------------------------------\n");
        iDigits = iNo % 10;
        iNo = iNo / 10;
        printf("iDigits is : %d\n",iDigits);
        printf("iNo is : %d\n",iNo);
    }
    printf("-------------------------------------\n");


    
    return 0;
}