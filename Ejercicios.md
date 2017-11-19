# Ejercicios

## Primer Ejercicio "Hola Mundo"

####Code
`#include <stdio.h>` </br>
`#include <stdlib.h>` </br >

`int main(int argc, char** argv) {` </br >

`	printf("hola mundo")` </br >
`	return(0)` </br >

`}` <br />
####Output
`hola mundo`


##Segundo Ejercicio "argc"

El argc es el número de elementos que recibe nuestro programa cuando es llamado desde la línea de comandos (y desde cualquier otro lado)
El primer argumento es el nombre del ejecutable, por la cual, si no le pasamos argumentos al programa, imprimirá 1

####Code
`#include <stdio.h>` <br />
`#include <stdlib.h>` <br />

`int main(int argc, char** argv) {` <br />

`printf("%d", argc);` <br />
    
`return (0);` <br />
`}` <br />

###Output
1