//ARITMÉTICA DE PUNTEROS
#include<stdio.h>
#include<stdlib.h>
int main(void){

	/*variables*/
	char y1[]= "hola";
	char y2[]= {'h','o','l','a','\0'};
	char x= 'x';
	char *z =&x;
	/*Cuerpo del programa*/
	printf("\n");
	// char *z = &x
	// z :almacena la dirección de x (&x)
	//*z : el valor de x (x)
	int i;
	printf("En la variable 'y1':");
	//Declaracion de puntero
	char *py1;
	py1 = &(y1[0]);
	printf("\n");
	for(i=0;i<5;i++){
				
		printf("caracter [%i]:{Val:'%c'Dir: '%x'}\n",i, y1[i], &(y1[i]));

	}

	//int (*x)-> entero *x
	//	  x -> puntero a entero

	
	printf("Variable 'py1'\n");
	printf("* valor		: '%c'\n", *py1);
	printf("* direccion	: '%x'\n", py1);
	printf("Sumando valores a py1\n");
	printf("\n");

	for(i=0;i<5;i++){
	    printf("py1 + [%i]: {Val: %c, Dir: %x}\n"
	    	,i,*(py1 +i),(py1+i));

	}

	printf("Se corrobora que sale lo mismo :)\n");

	//int (*x)-> entero *x
	//	  x -> puntero a entero

	//printf("la variable 'x' tiene por valor '%c' y esta en la direccion '%x'\n",x,&x);
	//printf("%c\n",*z);
	/*valor de retorno*/

	return EXIT_SUCCESS;
}