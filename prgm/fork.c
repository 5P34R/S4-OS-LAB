#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
void fork2()

{
if(fork()==0)
printf("\nHELLO WORLD!\n");
else
printf("\nHEY WORLD!\n");
}
int main()
{
	fork2();
	
	return 0;
}
