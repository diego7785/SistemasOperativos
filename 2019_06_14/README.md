# Revisión de las funciones para gestión de procesos en C

* [fork-basico](fork-basico.c)

Fibonacci con ´fork()´ y `wait()`
Para llevar a cabo la solución del problema planteado en clase debe descargar los siguientes archivos:

solucion.c
solucion.h
mainsol.c - este es un ejemplo
Para generar la libreria se ejecutan los siguientes comandos:

gcc -c solucion.c
ar rc libsolucion. solucion.o
Para compilar su programa usand la nueva libreria:

gcc -o mainsol -L. mainsol.c -lsolucion
