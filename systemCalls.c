#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
int main(){
    // char buf[50];
    // int n=read(0,buf,50);
    // write(1,buf,n);

    char buf[50];
    int fd1 = open("inp.txt", O_CREAT | O_RDONLY);
    int n=read(fd1,buf,50);
    int fd2 = open("out.txt",O_CREAT | O_RDWR,0777);
    write(fd2,buf,n);
    lseek(fd1,0,SEEK_SET);
    int p=read(fd1,buf,50);
    write(fd2,buf,p);

    return 0;
}