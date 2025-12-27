#include<stdio.h>
#include<fcntl.h> 
//Read and print

int main()
{
   int fd = 0,iRet = 0;
   char Filename[20];
   char Data[50] = {'\0'};

   printf("Enter the name of file : \n");
   scanf("%s",Filename);

   fd = open(Filename,O_RDWR);

   if(fd == -1)
   {
    printf("Unable to open\n");
    return -1; 
   }

   iRet = read(fd,Data,7);

   printf("%d bytes gets succesfully read \n",iRet);

   printf("Data from file : %s",Data);

   close(fd);

}

/*
PS D:\VIT\Marvellous DSA\file handeling> gcc program205.c
PS D:\VIT\Marvellous DSA\file handeling> ./a.exe
Enter the name of file : 
Demo.txt
7 bytes gets succesfully read 
Data from file : India i*/