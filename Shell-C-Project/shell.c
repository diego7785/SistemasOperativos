
//Librerias usadas
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include "funShell.h"



int main(int argc, char*argv[]) {


    while (1) {
        char comando[80];//variable que almacena la linea completa
        printf("%s shell>", getenv("PWD"));
        scanf(" %[^\n]s", comando);
        if (!strcmp("quit", comando)) {
            exit(0);
        }
        pid_t pid = fork();//creacion de proceso hijo
        int salidaTexto = 0,bool = 0;//variables "booleanas"
        FILE * fd; // archivo de salida

        if (!pid) {
            //arreglos para comando y pipe
            char * args[100], * array[100];
            
            asignarArgumentos(args, comando, &salidaTexto, &bool, array);
			
			if (salidaTexto){				
				if(prepararSalidaArchivo(salidaTexto,&fd,args))break;	
			}
			
            if (bool) { // Ejecucion con pipe //
                ejecutarPipe(args,array);
            } else { // Ejecucion sin pipe //
				ejecutarSinPipe(args);
            }
            cerrarArchivo(&fd,salidaTexto);
            break;//Muere el proceso hijo //
        } else {
            waitpid(pid, NULL, 0);//espera a que el proceso hijo muera
        }
    }
}
