#include<stdio.h>
int main()
{
    int iNo = 7236;
    int iDigits = 0;

    printf("-------------------------------------\n");
    printf("Original Value of iNo is : %d\n",iNo);
    printf("-------------------------------------\n");


    iDigits = iNo % 10;
    iNo = iNo / 10;
    printf("iDigits is : %d\n",iDigits);
    printf("iNo is : %d\n",iNo);

    printf("-------------------------------------\n");
    iDigits = iNo % 10;
    iNo = iNo / 10;
    printf("iDigits is : %d\n",iDigits);
    printf("iNo is : %d\n",iNo);

    printf("-------------------------------------\n");
    iDigits = iNo % 10;
    iNo = iNo / 10;
    printf("iDigits is : %d\n",iDigits);
    printf("iNo is : %d\n",iNo);
    
    printf("-------------------------------------\n");
    iDigits = iNo % 10;
    iNo = iNo / 10;
    printf("iDigits is : %d\n",iDigits);
    printf("iNo is : %d\n",iNo);


    return 0;
}