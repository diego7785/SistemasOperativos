
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include "helper.h"



int main(int argc, char*argv[]) {


    while (1) {
        char comandos[80];//variable que almacena la linea completa
        printf("%s shell>", getenv("PWD"));
        scanf(" %[^\n]s", comandos);
        if (!strcmp("quit", comandos)) {
            exit(0);
        }
        pid_t pid = fork();//creacion de proceso hijo
        int salidaTexto = 0,boole = 0;
        FILE * fd; // archivo de salida

        if (!pid) {
            char * args[100], * array[100];
            
            comandosYArgs(args, comandos, &salidaTexto, &boole, array);
			
			if (salidaTexto){				
				if(prepararSalidaArchivo(salidaTexto,&fd,args)){
					break;
				}
			} 
			sinBoole(args);
            
            cerrarArchivo(&fd,salidaTexto);
            break;//Termina el proceso hijo 
        } else {
            waitpid(pid, NULL, 0);//espera a que el proceso hijo termine
        }
    }
}
