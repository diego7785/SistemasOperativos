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

