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

int exists(const char *fname) {
    if ((file = fopen(fname, "r")))
    {
      return 1;
    }
    return 0;
}

int main(int argc, char *argv[]) {
   char *entrada = argv[1];
   long pos;
   int existencia = exists(entrada); //0 = NO existe, 1 SI existe
   if(existencia == 1){
   fseek(file, 0, SEEK_END);  //Se ubica en la ultima posicion del archivo
   for(pos = ftell(file)-1; pos >-1; pos--){ //Desde la ultima posicion hasta la primera
	fseek(file, pos, SEEK_SET); //Se ubica en la posicion pos
	caracter = fgetc(file); //Retorna el siguiente caracter y lo guarda
	printf("%c", caracter); //Se imprime
   }
   printf("\n");
   }else{
   printf("El archivo no existe \n");
   }
   fclose(file);
   return 0;
}



