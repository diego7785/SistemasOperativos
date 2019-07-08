# Punto 1

[punto1](punto1.c)

* El valor de la variable x en el proceso hijo es igual al valor que este mismo
le dio

* Si ambos procesos editan el valor de x, en cada caso x tendrá, para cada uno el valor
que cada proceso editó

Esto se da debido a que los procesos no interfieren en la ejecución del otro, ni
en sus variables, ya que se encuentran en posiciones diferentes de memoria

# Punto 2
[punto2](punto2.c)

Punto incompleto

# Punto 3
[punto3](punto3.c)

Se utilizó la instancia `sleep()`, para obligar al proceso padre a 
esperar 
por el proceso hijo, sin usar `wait()`
