#include<stdio.h>
#include<stdlib.h>
int main(void){
	/*stdlib.h contiene las variables para los valores de retorno:
				EXIT_SUCCESS 
				EXIT_FAILURE */
	/*mkdir example-03
	cd example-03
	touch hello_strings_1.c
	<editar en bloc de notas>
	gcc -c hello_strings_1.c
	gcc hello_strings_1.o -o hello_strings_1.exe
	./hello_strings_1.exe*/
	/*[modificador]<tipo> <nombre_de_var> [=<valor_de_la_variable]
	*/
	/*variables*/
	char x= 'x';
	/*Cuerpo del programa*/
	printf("%c\n",x);
	/*valor de retorno*/

	return EXIT_SUCCESS;
}