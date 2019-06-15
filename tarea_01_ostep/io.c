#include <stdio.h>
#include <unistd.h> 
#include <assert.h> 
#include <fcntl.h> 
#include <sys/stat.h> 
#include <sys/types.h> 
#include <string.h> 
#include <stdio.h>

//FILE *file;
//char caracter;

int exists(const char *fname) {
    FILE *file;
    if ((file = fopen(fname, "r")))
    {
      fclose(file);
      return 1;
    }
    return 0;
}

int main(int argc, char *argv[]) {
   char *entrada = argv[1];
   int existencia = exists(entrada); //0 = NO existe, 1 SI existe
   if(existencia == 1){
  // while((caracter = fgetc(file)) != EOF){
	//printf("%c",caracter);
     char buf[20];
     size_t nbytes;
     int fd = open(entrada, O_RDONLY);
    // printf("%d",fd);
     ssize_t archivo = read(fd, buf, nbytes);
     if(archivo == 0){
	printf("El archivo esta vacio");
     }else{
	printf("%s", buf);
     }
  // }
   }else{
   printf("El archivo no existe \n");
   }
   //fclose(file);
   return 0;
}



