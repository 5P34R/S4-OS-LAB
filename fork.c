#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main(){
  int p_id;
  if ((p_id = fork()) == 0){
    printf("Thee child process is created... pid: %d  parentid: %d\n\n", getpid(), getppid());
  }
  else{
  }
    printf("The parentid: %d\n\n", getpid());
  }


