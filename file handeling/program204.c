#include<stdio.h>
#include<fcntl.h> 
//Read

int main()
{
   int fd = 0,iRet = 0;
   char Filename[20];
   char Data[50];

   printf("Enter the name of file : \n");
   scanf("%s",Filename);

   fd = open(Filename,O_RDWR);

   if(fd == -1)
   {
    printf("Unable to open\n");
    return -1; 
   }

   iRet = read(fd,Data,5);

   printf("%d bytes gets succesfully read \n",iRet);

   close(fd);

}

/*
PS D:\VIT\Marvellous DSA\file handeling> ./a.exe
Enter the name of file : 
Demo.txt
5 bytes gets succesfully read */