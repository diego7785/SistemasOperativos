#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
  int file = open("hola", O_RDONLY);
  char c;
  if(file == -1){
    perror("Error abriendo archivo");
    exit(1);
  }
  while(read(file,&c,sizeof(c)!=0)){
    printf("%c",c);
  }
  close(file);
  return 0;
}
