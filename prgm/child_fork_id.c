#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
	int processId;
	processId=fork();
	if(processId<0)
	{
		printf("\nPROCESS NOT CREATED\n");
		return 1;
	}
	else if(processId==0)
	{
		printf("\n CHILD PROCESS \n");
		printf("PROCESS ID =%d\n",getpid());
		printf("PARENT  ID =%d\n",getppid());
	}
	else
	{
		wait(NULL);
		printf("\n\nPARENT PROCESS\n");
		printf("PROCESS ID =%d\n",getpid());
		printf("CHILD ID =%d\n",processId);
	}
	return 0;
}
