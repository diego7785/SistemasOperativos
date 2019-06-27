#include <unistd.h>
#include <stdio.h>


int main(int argc, char** argv){
	int x = 100;
	int pid = fork();
	if(pid==0){
	  printf("Hijo: \n");
	  printf("X: %d \n",x);
	  x=500;
	  printf("Cambio hecho por el hijo: %d \n", x);
	} else {
	  printf("Padre: \n");
	  printf("X: %d \n",x);
	  x=50;
	  printf("Cambio hecho por el padre: %d \n",x);
	}
	return 0;
}

//El valor de x que ve el hijo es 100
//Si ambos editan el valor de x, en cada caso x valdrá justamente el valor editado
//Ya que los procesos, aunque uno es copia del otro, estos no interfieren en su ejecución ni en sus variables porque tienen espacios 
//diferentes en memoria
