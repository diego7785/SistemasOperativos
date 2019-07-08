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

# Punto 4
[punto4](punto4.c)


# Punto 5
[punto5](punto5.c)

Si la instancia de `wait()` se coloca en el hijo, entonces, este nunca 
se ejecutará, porque se quedaría esperando a que un hijo inexistente 
termine su ejecución


# Punto 6
[punto6](punto6.c)

Es más favorable trabajar con `waitpid()` cuando se tienen varios 
procesos y se desea parar uno en específico

# Punto 7
[punto7](punto7.c)


# Punto 8
[punto8](punto8.c)

