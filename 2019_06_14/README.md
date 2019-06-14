# Revisión de las funciones para gestión de procesos en C

* [fork-basico](fork-basico.c)
* [fork-wait](fork-wait.c)

## Fibonacci con `fork()` y `wait()`

Para llevar a cabo la solución del problema planteado en clase debe descargar los siguientes archivos:

* [solucion.c](solucion.c)
* [solucion.h](solucion.h)
* [mainsol.c](mainsol.c)

Para generar la libreria se ejecutan los siguientes comandos:

`gcc -c solucion.c`

`ar rc libsolucion.a solucion.o`

Para compilar el programa usando la nueva libreria:

`gcc -o mainsol -L. mainsol.c -lsolucion`
