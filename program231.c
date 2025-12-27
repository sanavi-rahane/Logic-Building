//count number of Capital charecters in a string
#include<stdio.h>
void CountAll(char str[])
{
    int iCountsmall = 0,iCountCapital = 0;

    while (*str != '\0')
    {
       if((*str >= 'A') && (*str <= 'Z'))
       {
           iCountCapital++;
       }
       else if((*str >= 'a') && (*str <= 'z'))
       {
           iCountsmall++;
       }
        str++;
    }
    printf("Capital Count : %d ",iCountCapital);
    printf("Small Count : %d",iCountsmall);
    
    
}
int main()
{
    char Arr[50] ={'\0'};
   
    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);  

    CountAll(Arr);

    return 0;
}
/*
Enter String : 
Hello 123
Capital Count : 1 Small Count : 4
*/
