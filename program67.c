//Functional Approch
#include<stdio.h>
void DisplayDigits(int iNo)
{
    int iDigits = 0;

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
}
int main()
{
    int iValue = 0;

    printf("Enter NUmber : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);
    
    return 0;
}