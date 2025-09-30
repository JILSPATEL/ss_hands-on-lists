/*
========================================================================================================
Name:12.c
Author:Jils Patel
Description:Write a program to create an orphan process. Use kill system call to send SIGKILL signal to
            the parent process from the child process.
Date:23 September 2025
========================================================================================================
*/
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
int main()
{
    int pid;
    pid = fork();
    if (pid == 0)
    {
        printf("inside child pid= %d\n", getpid());
        printf("parent id= %d\n", getppid()); 
        int status=kill(getppid(),SIGKILL);
        if(status==0){
            printf("Parent is killed Chiled is now orphen\n");   
            sleep(10);
        }else{
            perror("Error while killing parent process!");
        }
    }
    else
    {
        // inside parent
        while(1);
    }
    return 0;
}
/*
================================================================
Output: jils@Inspiron-3593:/mnt/e/SS/hands-on-list-2$ ./a.out
        inside child pid= 416
        parent id= 415
        Parent is killed Chiled is now orphen
        Killed
================================================================
*/