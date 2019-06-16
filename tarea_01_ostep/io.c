#include <stdio.h>
#include <unistd.h> 
#include <assert.h> 
#include <fcntl.h> 
#include <sys/stat.h> 
#include <sys/types.h> 
#include <string.h> 
#include <stdio.h>

FILE *file;
char caracter;
//int tamano;

int exists(const char *fname) {
   // FILE *file;
    if ((file = fopen(fname, "r")))
    {
     // tamano = sizeof(file);
     // fclose(file);
      return 1;
    }
    return 0;
}

int main(int argc, char *argv[]) {
   char *entrada = argv[1];
   int existencia = exists(entrada); //0 = NO existe, 1 SI existe
   if(existencia == 1){
   fseek(file, 0L, SEEK_END);
   printf("%d bytes", ftell(file));
   while((caracter = fgetc(file)) != EOF){
	printf("%c",caracter);
    // char buf[100];
    // size_t nbytes;
    // int fd = open(entrada, O_RDONLY);
    // printf("%d",fd);
    // nbytes = tamano;
    // ssize_t archivo = read(fd, buf, nbytes);
    // close(fd);
    // if(archivo == 0){
	//printf("El archivo esta vacio \n");
    // }else{
	//printf("%s \n", buf);
     //}
   }
   }else{
   printf("El archivo no existe \n");
   }
   fclose(file);
   return 0;
}



