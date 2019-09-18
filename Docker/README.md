# 1.

## 1. ¿Qué debe hacer para crear una máquina virtual con un sistema Linux de 64 bits? 

Añadir al archivo Vagrantfile la linea `config.vm.box = "ubuntu/xenial64"`

## 2. Inicializar la variable hostname
 
Se configuró el archivo con la linea `config.vm.hostname="virtualBoxDocker"`

# 2. 

Se escogió la imagen de node y se descargó a partir del comando 
`docker pull node` y se listó para verficar con `docker images`

# 3.

Se usó el comando `alias numimag='docker images'` para crear un comando que
permita listar la cantidad de imágenes descargadas

# 4.

Se agregó la línea config.vm.provision "docker", images: ["ubuntu"] con el fin
de tener instalado el contenedor de ubuntu en la máquina con docker.

Se ejecutó `docker run -it ubuntu`.

Se ejecutó `ls` para conocer los archivos y directorios en este.

Para conocer el usuario se usó `whoami`.

Al ejecutar `rm -rf /bin/*` se borra una carpeta que contiene los comandos
`ls` y `cat`.

Al ejecutar `docker run -it ubuntu` de nuevo y ejecutar `ls` se verifica que no tiene bin 
archivos.

Al ejecutar `docker run -it ubuntu /bin/bash`, crea y ejecuta el contenedor y 
accede bash para la ejecución de los comandos.

Para agregar un usuario se ejecutó `useradd diego`


# 6.

Se ejecutó la linea `alias contenedoresEje='docker ps'`

# 7.

Para listar los contenedores que poseen el estado de terminados de usó el comando `docker ps --all --filter "status=exited"` que muestra
todos los contenedores y luego los filtra por aquellos que tengan el estado de terminado.

A fin de borrar estos contenedores se pasó este argumento al comando `docker rm` así `docker rm $(docker ps --all --filter "status=exited" -q)`
que elimina los contenedores terminados y retorna los id de estos


# 8.

Se ejecutó el comando `docker run nareshganesan/node.js-helloworld` y esta aplicación comenzó a funcionar en un puerto, luego se 
accedió a otra consola y se utilizó `docker ps` para conocer el id del proceso y luego se urilizó `docker stop <id-proceso>` para
detener el proceso y por último se comprobó que esto funcionó

# 9.  

Se utilizó el mismo id del proceso obtenido anteriormente y se pasó como argumento a `docker start <id-proceso>`
