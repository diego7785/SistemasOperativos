# Tarea 1 Sistemas Operativos 

## Hilos

Se creó el archivo [mycommon.h](mycommon.h) con el fin de facilitar el uso de 
las puertas para la sincronización de los hilos.

Junto con los archivos [common.h](common.h) y 
[common_threads.h](common_threads.h) la ejecución del código 
[threads.c](threads.c) se realiza así: 
* Compilar:

`gcc -pthread threads.c -o threads`

* Ejecución:

`./thread (valor a ejecutar)`

## mem.c

Enlace a videos:

Ejecutar el comando:

`sudo sh -c 'echo 0 > /proc/sys/kernel/randomize_va_space'`

Con el fin de deshabilitar la asignación aleatoria de memoria para los 
procesos y así evidenciar que estos están accediendo a una misma región 
de memoria 

* Compilar:

`gcc mem.c -o mem -lpthread`

* Ejecución:

`./mem (valor a ejecutar) & ./mem (valor a ejecutar)`

Así se evidencia como acceden a la misma región de memoria de forma 
concurrente pero con valores diferentes

## io.c

Este código recibe un archivo y lo imprime al revés


* Compilar:

`gcc io.c -o io`

* Ejecución:

`./io (Ruta del archivo)`

