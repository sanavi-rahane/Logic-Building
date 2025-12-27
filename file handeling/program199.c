#include<stdio.h>
#include<fcntl.h> 
//cretating file by taking name from user
int main()
{
    int fd = 0;
    char Filename[20];
    printf("Enter the file name that you want to create :");
    scanf("%s",Filename);

    fd=creat(Filename,0777);

    if(fd == -1)
    {
        printf("Unable to Create file\n");
    }
    else
    {
        printf("File succesfully created :%d",fd);
    }
    return 0;
}