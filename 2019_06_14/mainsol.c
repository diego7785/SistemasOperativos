#include "solucion.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(int argc, char** argv) {
  int x = 20;

  pid_t pid;

  pid = fork();
  if(pid == 0){
    x = fibonacci(x);
    guardarEntero("archivo",x);
  }else{
    wait(NULL);
    printf("fibonacci(%d) = ", x);
    int fibo1 = (int) leerEntero("archivo");
    int fibo2 = fibo1*100;
    printf("%d\n", fibo2);
  }
  return 0;
}
