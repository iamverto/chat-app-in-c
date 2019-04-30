#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
void main()
{
char str[256]="start";
int fifo_read, fifo_write;
while(1)
{
fifo_read=open("pipeA", O_RDONLY);
if(fifo_read<0)
printf("Error while opening the read pipe");
else{
read(fifo_read, str, 255*sizeof(char));
close(fifo_read);
system("clear");
printf("\n%s",str);
}
fifo_write=open("pipeB",O_WRONLY);
if(fifo_write<0)
printf("\nerror opening write pipe");
else
{
printf("\nEnter message");
scanf("%s",str);
write(fifo_write, str, 255*sizeof(char));
close(fifo_write);
}
}
}
