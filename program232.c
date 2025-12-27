//count number of digits in a string using ASSCIiS
#include<stdio.h>
void CountDigits(char str[])
{
    int iCount = 0;

    while (*str != '\0')
    {
       if((*str >= 8) && (*str <= 57))
       {
           iCount++;
       }
       
        str++;
    }
    printf("Number of Digits : %d ",iCount);
    
    
}
int main()
{
    char Arr[50] ={'\0'};
   
    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);  

    CountDigits(Arr);

    return 0;
}
/*

*/
