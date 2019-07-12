#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv){
	if(argc!=2){
		printf("Falta argumentos pendejo");
	}else{
		int cantidad = atoi(argv[1]);
		char *arreglo = malloc(cantidad*1024*1024*sizeof(int));
		if(arreglo==NULL){
			printf("Error asignando memoria");
			exit(-1);
		}

		for(int i=0; i<cantidad*1024*1024; i++){
			arreglo[i]=i;
		}
		sleep(10);
	}
	return 0;
}
