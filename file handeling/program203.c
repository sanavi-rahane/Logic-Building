#include<stdio.h>
#include<fcntl.h> 
//Write

int main()
{
   int fd = 0,iRet = 0;
   char Filename[20];
   char Data[] ="India is my Country";

   printf("Enter the name of file : \n");
   scanf("%s",Filename);

   fd = open(Filename,O_RDWR);

   if(fd == -1)
   {
    printf("Unable to open\n");
    return -1; //indicate the failure to OS
   }

   iRet = write(fd,Data,11);

   printf("%d bytes gets succesfully return \n",iRet);
   close(fd);

}