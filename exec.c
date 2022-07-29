#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int list(){
  printf("List Process id: %d\n\n", getpid());
  char *path = "/bin/ls";
  char *args[] = { path, "-lh", "/home/student", NULL};
  execv(path, args);
  return 0;
}

int main(){
  printf("Main process id: %d\n\n", getpid());
  list();
}


