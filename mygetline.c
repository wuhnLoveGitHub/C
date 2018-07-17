#include<stdio.h>
#include<fcntl.h>
int main(int argc, char *argv[])
{
    int fd;
    int iRet;
    char buf[100] = "";
    char caFileName[100] = "";
    sprintf(caFileName,"%s",argv[1]);
    fd=open("caFileName",O_RDWR);
    while(1)
    {
        if()
        mygetline(fd,buf,);
        printf("%s",buf);
    }
    close(fd);
    
    return 0;
}
int mygetline(int fd,char * buf,int size)
{
    char buf[100] = "";
    read(fd,buf,sizeof());
    printf("1rd line");
    fseek(fd,iRet-sizeof(buf),SEEK_CUR);
}
