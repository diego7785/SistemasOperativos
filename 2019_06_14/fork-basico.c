#include <unistd.h>
#include <stdio.h>

/*
This program should print the next words:

Soy el hijo y mi identificador es: 34567
Soy el padre, mi identificador es: 34566 y el de mi hijo es: 34567

Using the function 'getpid()'
*/
int main(int argc, char** argv){
	pid_t pid;


	pid = fork();
	if(pid == 0){
		printf("Soy el hijo y mi identificador es: %d \n", (int) getpid());
	}else{
		printf("Soy el padre y mi identificador es: %d y el de mi hijo es: %d \n", (int)getpid(), (int)  pid);
	}
}
