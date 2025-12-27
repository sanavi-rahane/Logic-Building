#include<stdio.h>
int main()
{
    int iNo = 7236;
    int iDigits = 0;

    iDigits = iNo % 10;
    iNo = iNo / 10;
    printf("iDigits is : %d\n",iDigits);
    printf("iNo is : %d\n\n",iNo);
    
    iDigits = iNo % 10;
    iNo = iNo / 10;
    printf("iDigits is : %d\n",iDigits);
    printf("iNo is : %d\n\n",iNo);
    
    iDigits = iNo % 10;
    iNo = iNo / 10;
    printf("iDigits is : %d\n",iDigits);
    printf("iNo is : %d\n\n",iNo);

    iDigits = iNo % 10;
    iNo = iNo / 10;
    printf("iDigits is : %d\n",iDigits);
    printf("iNo is : %d\n\n",iNo);


    return 0;
}