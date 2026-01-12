#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>      //universal standard
#include<fcntl.h>   

int main()
{
     int fd = 0;
     fd = creat("LB.txt",0777);
     if(fd == -1)
     {
        printf("Unable to create file\n");
     }
     else
     {
        printf("File get Sucesfully created with fd : %d\n",fd);
     }


    return 0;
}