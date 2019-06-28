#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){
  int pid = fork();
  if(pid == 0){
    printf("hello \n");
  }else{
    sleep(2);
    printf("goodbye \n");
  }
  return 0;
}
