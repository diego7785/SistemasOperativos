#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char * argv[])
{
	int rc = fork();
	if (rc == 0)
	{
	   printf("Proceso hijo en ejecución \n");
	}
	else 
	{
 	   int w=waitpid(rc,NULL,WUNTRACED);
	   printf("Proceso padre en ejecución \n");
    	   printf("id wait: %d", w);
	}
	return 0;
}
