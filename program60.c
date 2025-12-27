//Program On Digits Started 

#include<stdio.h>
int main()
{
    int iNo = 7236;
    int iDigits = 0;

    iDigits = iNo % 10;
    iNo = iNo / 10;
    printf("%d\n",iDigits);
    
    iDigits = iNo % 10;
    iNo = iNo / 10;
    printf("%d\n",iDigits);
    
    iDigits = iNo % 10;
    iNo = iNo / 10;
    printf("%d\n",iDigits);

    iDigits = iNo % 10;
    iNo = iNo / 10;
    printf("%d\n",iDigits);


    return 0;
}