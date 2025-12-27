
#include<stdio.h>

int main()
{
    char Name[50] ={'\0'};

    printf("Enter Your Name : \n");
    scanf("%s",Name); //scanf not considering the content after space

    printf("Hello %s\n",Name);
    
    return 0;
}
/*
PS D:\VIT\Marvellous DSA\C_Programming\Classwork\day> ./a.exe
Enter Your Name : 
Rahul
Hello Rahul
PS D:\VIT\Marvellous DSA\C_Programming\Classwork\day> ./a.exe
Enter Your Name : 
Rahul Patil
Hello Rahul
PS D:\VIT\Marvellous DSA\C_Programming\Classwork\day> 
*/