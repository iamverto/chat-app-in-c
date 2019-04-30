#include<stdio.h>
void main()
{
int f1, f2;
f1 = mkfifo("pipeA", 0666);
if(f1<0)
printf("\nerror---->PIPEA IS NOT CREATED");
else
printf("\nsuccess----->PIPEA CREATED SUCCESSFULLY");

f2 = mkfifo("pipeB", 0666);
if(f2<0)
printf("\nerror---->PIPEB IS NOT CREATED");
else
printf("\nsuccess----->PIPEB CREATED SUCCESSFULLY");


}
