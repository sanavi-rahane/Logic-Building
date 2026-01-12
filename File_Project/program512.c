#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>      
#include<fcntl.h>   
//isuue to apend sole this
int main()
{
     int fd = 0;
     int iRet = 0;
     char Arr[] = "Maharastra";
     fd = open("JanuaryX.txt",O_RDWR | O_APPEND);
     if(fd == -1)
     {
         printf("Unable to open file\n");
     }
     else
     {
         printf("File get Sucesfully opened with fd : %d\n",fd);
                                 
         iRet = write(fd,Arr,11);  
         printf("%d bytes get Sucesfully written into the file\n",iRet);
         close(fd);
     }

     

    return 0;
}