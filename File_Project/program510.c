#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>      //universal standard
#include<fcntl.h>   

int main()
{
     int fd = 0;
     int iRet = 0;
     char Arr[] = "Jay Ganesh";
     fd = open("JanuaryX.txt",O_RDWR | O_CREAT, 0777);
     if(fd == -1)
     {
         printf("Unable to open file\n");
     }
     else
     {
         printf("File get Sucesfully opened with fd : %d\n",fd);
                                 
         iRet = write(fd,Arr,3);  //expected 3

         printf("%d bytes get Sucesfully written into the file\n",iRet);
         close(fd);
     }

     

    return 0;
}