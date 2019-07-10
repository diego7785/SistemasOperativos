#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>


//Funcion encargada de asignar los comandos y argumentos a los arreglos 
//de pipe y del comando anterior al pipe
void comandosYArgs(char ** arrayArgs, char *linea, int *text, int *doPipe, char ** pipeArray) {
    char * aux;
    int contador = 0, contador2 = 0;
    aux = strtok(linea, " ");
	
    while (aux != NULL) {
        arrayArgs[contador] = strdup(aux);
        aux = strtok(NULL, " ");
        contador++;
        if (aux == NULL)break;
		
        if (!strcmp("|", aux)) {
            *doPipe = 1;
            contador2 = -1;
            while (aux != NULL ) {
                pipeArray[contador2] = strdup(aux);
                aux = strtok(NULL, " ");
                contador2++;
                if (aux == NULL || !strcmp(">", aux))break;		
            }
            pipeArray[contador2] = NULL;
        }
        
        if (aux == NULL)break;
        if (!strcmp(">", aux)) {
			
            *text = contador + 2;
            arrayArgs[contador] = NULL;
            contador++;
        }
    }
    arrayArgs[contador] = NULL;
}


//ejecuta el comando que se encuentra antes del pipe y 
//almacena su salida en un archivo de texto
void ejecutarPrimerPipe(FILE * swap,char ** myargs){
		swap = freopen(" ", "w+", stdout);
		int aux = execvp(myargs[0], myargs);
		fclose(swap);
		if (aux == -1)printf("%s : No se reconoce el comando\n", myargs[0]);
	
}

//Marca el final de los argumentos en el arreglo que contiene el 
//comando despues del pipe para poniendo un null y el nombre 
//del archivo que tiene la salida del comando anterior al pipe
void ponerNull(char **pipeArray){
	int i = 0;
	while (1) {
		if (pipeArray[i] == NULL) {
			pipeArray[i] = " ";
			pipeArray[i + 1] = NULL;
			break;
		}
		i++;
	}
}


//Ejecucion simple del comando con argumentos y sin pipe
void sinBoole(char ** myargs){
	
	int aux = execvp(myargs[0], myargs);
	if (aux == -1)printf("%s : No se reconoce el comando \n", myargs[0]);
	
}

//cierra el archivo de salida en caso de haber sido creado
void cerrarArchivo(FILE ** fd,int salidaTexto){
	if (salidaTexto) fclose(*fd);
}

//Determina si el nombre del archivo ya existe para arrojar el error 
//o para crearlo y abrirlo en caso contrario
int prepararSalidaArchivo(int posicion,FILE ** fd, char ** args) {
	
	FILE * fparchivo= fopen (args[posicion], "r"); 	
	if(fparchivo != NULL){
		printf("Error! el nombre del archivo ya exite\n");
		return 1;
	}
	else {
		*fd = freopen(args[posicion], "w+", stdout);
		return 0;
	}
	
}
