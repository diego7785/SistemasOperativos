#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *archivo;
  char car;
char textoPadre[] = "Proceso padre escribiendo \n";
  char textHijo[] = "Proceso hijo escribiendo \n";
  archivo = fopen("archivoAux", "r+");
  int pid = fork();
  if(pid == 0){
      printf("Hijo \n");
      fputs(textHijo, archivo);
  }else {
      printf("Padre \n");
      fputs(textoPadre, archivo);
  }
  
  if(archivo == NULL){
      printf("Error al abrir el archivo \n");
  }else{
      while((car = fgetc(archivo)) != EOF){
          printf("%c", car);
      }
  }
  fclose(archivo);
  
  return 0;
}
