#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>      //universal standard
#include<fcntl.h>
#include<errno.h>

int main()
{
     int fd = 0;
     fd = creat("LB.txt",0777);

     if (fd == -1)
     {
         perror("Error creating file");
         printf("errno: %d\n", errno);
         return 1;
     }

     printf("fd is : %d\n",fd);

     close(fd);  // Close the file descriptor

    return 0;
}
