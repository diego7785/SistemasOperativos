#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
  int file = open("hola", O_RDONLY);
  int pid = fork();
  if(pid==0){
    printf("Proceso hijo: \n");
  }else{
    printf("Proceso padre: \n");
  }
  FILE *fil;
  fil=fopen("hola", "r+");
  int c;
  while((c = fgetc(fil)) != EOF){
    printf("%c",c);
  }
  fputs("Escribiendo en el archivo \n", fil);
  printf("\n");
  fclose(fil);
  close(file);
  return 0;
}
