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
   fseek(file, 0, SEEK_END);
   for(pos = ftell(file)-1; pos >-1; pos--){
	fseek(file, pos, SEEK_SET);
	caracter = fgetc(file);
	printf("%c", caracter);
   }
   printf("\n");
   }else{
   printf("El archivo no existe \n");
   }
   fclose(file);
   return 0;
}



