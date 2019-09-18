# 1.

## 1. ¿Qué debe hacer para crear una máquina virtual con un sistema Linux de 64 bits? 

Añadir al archivo Vagrantfile la linea `config.vm.box = "ubuntu/xenial64"`

## 2. Inicializar la variable hostname
 
`config.vm.hostname="virtualBoxDocker"`

# 2. 

Se escogió la imagen de node y se descargó a partir del comando 
`docker pull node` y se listó para verficar con `docker images`

# 3.

Se usó el comando `alias numimag='docker images'` para crear un comando que
permita listar la cantidad de imágenes descargadas


