
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include "helper.h"



int main(int argc, char*argv[]) {


    while (1) {
        char comando[80];//variable que almacena la linea completa
        printf("%s shell>", getenv("PWD"));
        scanf(" %[^\n]s", comando);
        if (!strcmp("quit", comando)) {
            exit(0);
        }
        pid_t pid = fork();//creacion de proceso hijo
        int salidaTexto = 0,boole = 0;
        FILE * fd; // archivo de salida

        if (!pid) {
            char * args[100], * array[100];
            
            asignarArgumentos(args, comando, &salidaTexto, &boole, array);
			
			if (salidaTexto){				
				if(prepararSalidaArchivo(salidaTexto,&fd,args))break;	
			}
			
            if (boole) { 
                ejecutarBoole(args,array);
            } else { 
				sinBoole(args);
            }
            cerrarArchivo(&fd,salidaTexto);
            break;//Termina el proceso hijo 
        } else {
            waitpid(pid, NULL, 0);//espera a que el proceso hijo termine
        }
    }
}
