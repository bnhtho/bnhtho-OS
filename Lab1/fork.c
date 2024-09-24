#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  printf("I am: %d\n", (int)getpid());
  // FIXME : Fix this
  // /TODO :
  // FIXME : Fix this bug
  printf("I am: %d\n", (int)getpid());
  pid_t pid = fork();
  /*Return pid*/
  printf("Return Result : %d\n", (int)pid);
  /*Conditional*/
  if (pid < 0) {
    perror("fork false");
  }
  if (pid == 0) {
    printf("Return Result : %d\n", (int)pid);
    sleep(5);
    printf("Child Exiting....\n");
    exit(0);
  }
  wait(NULL);
  printf("Parent Ending \n");
  return 0;
}
