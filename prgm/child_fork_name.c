#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
void fork2()
{
	if(fork()==0)
		printf("\nHELLO FROM CHILD\n");
	else
		printf("\nHELLO FROM PARENT\n");
}
int main()
{
	fork2();
	return 0;
}
