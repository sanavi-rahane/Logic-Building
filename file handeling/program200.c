#include<stdio.h>
#include<fcntl.h> 

int main()
{
    int fd = 0;
    char Filename[20];
    printf("Enter the file name that you want to Open :");
    scanf("%s",Filename);

    fd=open(Filename,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File succesfully opened with  :%d\n",fd);
    }
    return 0;
}