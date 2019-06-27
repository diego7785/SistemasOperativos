#include <unistd.h>
#include <stdio.h>


int main(int argc, char** argv){
	int x = 100;
	fork();
	x=x+2;
	printf("%d \n",x);
	return 0;
}

//El valor de x que ambos ven es: 100
//Si ambos editan el valor de x, x valdrá lo mismo para ambos procesos, perdiéndose así una asignación
