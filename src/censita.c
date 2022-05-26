/*
 * censita.c
 *
 *  Created on: 24 may. 2022
 *      Author: Abril Uberti, div d
 */

#include <stdio.h>
#include <stdlib.h>
#include "censista.h"
#include "input.h"
#include <string.h>

void inicializacionCensistas(censista *listadoCensistas) {

	strcpy(listadoCensistas[0].nombre, "Ana");
	listadoCensistas[0].edad = 34;
	strcpy(listadoCensistas[0].telefono, "1203 - 2345");
	listadoCensistas[0].legajoCensista = 100;
	strcpy(listadoCensistas[1].nombre, "Juan");
	listadoCensistas[1].edad = 24;
	strcpy(listadoCensistas[1].telefono, "4301 - 54678");
	listadoCensistas[1].legajoCensista = 101;
	strcpy(listadoCensistas[2].nombre, "Sol");
	listadoCensistas[2].edad = 47;
	strcpy(listadoCensistas[2].telefono, "5902 - 37487");
	listadoCensistas[2].legajoCensista = 102;

}
int listadoDeCensistas(censista *listaCensistas, int longitud) {
	int i;
	printf("\nlos censistas son:\n"
			"Legajo: \tNombre: \tEdad: \t\tTelefono:\n\n");
	for (i = 0; i < longitud; i++) {
		printf("%d \t\t%s \t\t%d \t\t%s\n", listaCensistas[i].legajoCensista,
				listaCensistas[i].nombre, listaCensistas[i].edad,
				listaCensistas[i].telefono);
	}
	return 0;
}
