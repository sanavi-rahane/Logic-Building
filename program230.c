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
       else
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
PS D:\VIT\Marvellous DSA\C_Programming\Classwork\day> gcc program230.c
PS D:\VIT\Marvellous DSA\C_Programming\Classwork\day> ./a.exe
Enter String : 
heLLo
Capital Count : 2 Small Count : 3
PS D:\VIT\Marvellous DSA\C_Programming\Classwork\day> ./a.exe
Enter String : 
hello 123
Capital Count : 0 Small Count : 9
*/
