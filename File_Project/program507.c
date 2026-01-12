#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>      //universal standard
#include<fcntl.h>   

int main()
{
     int fd = 0;
     //O_RDONLY     O_WRONLY   O_RDWR      O_TRUNC     O_CREAT  
     fd = open("January.txt",O_RDWR | O_CREAT);
     if(fd == -1)
     {
        printf("Unable to open file\n");
     }
     else
     {
        printf("File get Sucesfully opened with fd : %d\n",fd);
                              
        write(fd,"Jay Ganesh",3);
        close(fd);
     }

     

    return 0;
}