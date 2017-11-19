#include<stdio.h>
#include<stdlib.h>
int main(void){

	// & <var_name> retorna la dirección de memoria de la variable
	//	[A]mpersand = [A]ddres (Dirección)
	//*<var_name> Variable que recibirá una dirección de memoria 
	/*variables*/
	
	/*variables*/
	char y1[]= "hola";
	char y2[]= {'h','o','l','a','\0'};
	char x= 'x';
	char *z =&x;
	/*Cuerpo del programa*/
	printf("Variable 'x'\n");
	printf("* valor		: '%c'\n", x);
	printf("* direccion	: '%x'\n", &x);
	printf("\n");
	printf("Variable 'y1'\n");
	printf("* valor		: '%c'\n", y1);
	printf("* direccion	: '%x'\n", &y1);
	printf("\n");
	printf("Variable 'y1'\n");
	printf("* valor		: '%c'\n", y2);
	printf("* direccion	: '%x'\n", &y2);
	printf("\n");
	// char *z = &x
	// z :almacena la dirección de x (&x)
	//*z : el valor de x (x)
	printf("Variable 'z'\n");
	printf("* valor		: '%c'\n", *z);
	printf("* direccion	: '%x'\n", z);
	printf("\n");

	int i;
	printf("En la variable 'y1':");

	char *py1;
	py1 = &(y1[0]);
	printf("\n");
	for(i=0;i<5;i++){
				
		printf("caracter [%i]:{Val:'%c'Dir: '%x'}\n",i, y1[i], &(y1[i]));

	}

	for(i=0;i<5;i++){
	    printf("%x\n", py1+i);

	}

	//int (*x)-> entero *x
	//	  x -> puntero a entero

	//printf("la variable 'x' tiene por valor '%c' y esta en la direccion '%x'\n",x,&x);
	//printf("%c\n",*z);
	/*valor de retorno*/

	return EXIT_SUCCESS;
}