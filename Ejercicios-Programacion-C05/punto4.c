#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[]){
    printf("Ejecutando ls\n");
    int pid  = fork();
    if(pid==0){
        char *comando = "ls";
        execvp(comando, argv);
    }
    return 0;
}

