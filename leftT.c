#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

void main()
{
char str[256] = "start";
int fifo_write, fifo_read;
while(1)
{
fifo_write = open("pipeA",O_WRONLY);
if(fifo_write<0)
printf("\nError occured in opening pipe");
else{
printf("\nEnter Message:\n");
scanf("%s",str);
write(fifo_write, str, 255*sizeof(char));
close(fifo_write);
}

// reading the message
fifo_read = open("pipeB", O_RDONLY);
if(fifo_read<0)
printf("ERROR");
else
{
read(fifo_read, str, 255*sizeof(char));
close(fifo_read);
system("clear");
printf("\n%s", str);
}
}
}
