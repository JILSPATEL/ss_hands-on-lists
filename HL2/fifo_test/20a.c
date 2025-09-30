/*
=============================================================================
Name:20a.c
Author:Jils Patel
Description:Write two programs so that both can communicate by FIFO -Use one 
	    way communication.
Date:
=============================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(){
	int fd;
	char buff[100];
	fd=open("myfifo",O_WRONLY);

	printf("Enter Data: ");
	scanf("%[^\n]",buff);
	write(fd, buff, sizeof(buff));
	close(fd);
	return 0;
}
