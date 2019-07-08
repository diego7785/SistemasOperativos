#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int rc = fork();
	if (rc == 0)
	{
		printf("Proceso hijo \n");
		close(STDOUT_FILENO);
		printf("Se cerró la salida estándar \n");
	}
	else 
	{
		printf("Proceso padre \n");
	}
	return 0;
}
