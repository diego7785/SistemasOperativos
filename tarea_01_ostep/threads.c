#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "common_threads.h"
#include "mycommon.h"

puerta puerta1; 
volatile int counter = 0;
int loops;

void *worker(void *arg) {
    int i;
    for (i = 0; i < loops; i++) {
        cerrar_puerta(puerta1);
        counter++;
        abrir_puerta(puerta1);
    }
    return NULL;
}

int main(int argc, char *argv[]) {
    if (argc != 2) { 
        fprintf(stderr, "usage: threads <loops>\n"); 
        exit(1); 
    } 
    loops = atoi(argv[1]);
    pthread_t p1, p2;
    printf("Initial value : %d\n", counter);
    crear_puerta(puerta1);
    Pthread_create(&p1, NULL, worker, NULL); //creacion de hilos
    Pthread_create(&p2, NULL, worker, NULL);
    Pthread_join(p1, NULL); //indicador de espera para cada hilo (sincronizacion)
    Pthread_join(p2, NULL);
    printf("Final value   : %d\n", counter);
    destruir_puerta(puerta1);
    return 0;
}

