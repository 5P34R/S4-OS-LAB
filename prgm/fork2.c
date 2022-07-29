#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{

   fork();
   fork();
   fork();
   printf("\nHELLO WORLD!\n");
   return 0;
   
   }
