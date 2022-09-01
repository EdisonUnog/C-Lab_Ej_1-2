/*
 ============================================================================
 Name        : aLab1_prueba1.c
 Author      : EDISON FRANCISCO UÑOG VALENCIA
 Version     : 1
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 ejercicio 1-3
 Ingresar 3 números y mostrar el número del medio, sólo si existe. En
 caso de que no exista también informarlo.
 Ejemplo:
 1 5 3 el 3 es del medio
 5 1 5 no hay número del medio
 3 5 1 el 3 es del medio
 3 1 5 el 3 es del medio
 5 3 1 el 3 es del medio
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int main(void) {
	setbuf(stdout,NULL);

	int numUno;
	int numDos;
	int numTres;

	printf("\n Ingrese el primer numero: ");
	scanf("%d",&numUno);
	printf(" Ingrese el segundo numero: ");
	scanf("%d",&numDos);
	printf(" Ingrese el tercer numero: ");
	scanf("%d",&numTres);

	if(numUno!=3 && numDos!=3 && numTres!=3){
		printf("\n El 3 no existe");
	}else{
		if(numDos==3){
			printf("\n numero [(%d)] ubicado correctamente: ",numDos);
		}
		if(numUno==3){
			printf("\n El numero [(%d)] va en el segundo lugar: ",numUno);
		}
		if(numTres==3){
			printf("\n El numero [(%d)] va en el segundo lugar: ",numTres);
		}
	}


	return EXIT_SUCCESS;
}
