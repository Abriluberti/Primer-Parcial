/*
 * Operaciones.c
 *
 *  Created on: 23 may. 2022
 *      Author: Abril Uberti, div d
 */

#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include <string.h>
#include "vivienda.h"
#include "censista.h"

int inicializarVivienda(vivienda *listadoVivienda, int longitud) {
	int i;
	for (i = 0; i < longitud; i++) {
		listadoVivienda[i].isEmpty = -1;
		listadoVivienda[i].idVivienda = -1;
	}
	return 0;
}

int cargarVivienda(vivienda *listadoVivienda, int longitud, int id,
		char calle[], int cantidadPersonas, int cantidadHabitaciones,
		int tipoVivienda, int legajoCensista) {
	int i = 0;
	for (; i < longitud; i++) {
		if (listadoVivienda[i].isEmpty == -1) {
			listadoVivienda[i].isEmpty = 0;
			listadoVivienda[i].idVivienda = id;
			strcpy(listadoVivienda[i].calle, calle);
			listadoVivienda[i].cantidadPersonas = cantidadPersonas;
			listadoVivienda[i].cantidadHabitaciones = cantidadHabitaciones;
			listadoVivienda[i].tipoVivienda = tipoVivienda;
			listadoVivienda[i].legajoCensista = legajoCensista;

			printf("\n\tSU ID ES: %d\n", id);

			i = longitud + 1;
		}

	}
	return 0;

}

int listarViviendass(vivienda *listadoVivienda, int longitud,
		censista *listadoCensistas) {
	int i;
	printf(
			"\nlas viviendas son:\n"
					"ID: \tCalle: \tCantidad de Personas: Cantidad de Habitaciones: Tipo de Vivienda: Legajo de Censista:\n\n");
	for (i = 0; i < longitud; i++) {
		if (listadoVivienda[i].isEmpty != -1) {
			printf("%d \t %s\t\t\t %d \t\t\t%d \t\t%d \t\t%d\n",
					listadoVivienda[i].idVivienda, listadoVivienda[i].calle,
					listadoVivienda[i].cantidadPersonas,
					listadoVivienda[i].cantidadHabitaciones,
					listadoVivienda[i].tipoVivienda,
					listadoVivienda[i].legajoCensista);
			if (listadoVivienda[i].legajoCensista == 100) {
				printf("%d \t %s\t\t\t %d \t\t\t%d \t\t%d \t\t%d\n",
						listadoCensistas[0].legajoCensista,
						listadoCensistas[0].nombre, listadoCensistas[0].edad,
						listadoCensistas[0].telefono);

			} else {
				if (listadoVivienda[i].legajoCensista == 101) {
					printf("%d \t %s\t\t\t %d \t\t\t%d \t\t%d \t\t%d\n",
							listadoCensistas[1].legajoCensista,
							listadoCensistas[1].nombre,
							listadoCensistas[1].edad,
							listadoCensistas[1].telefono);
				} else {

					printf("%d \t %s\t\t\t %d \t\t\t%d \t\t%d \t\t%d\n",
							listadoCensistas[2].legajoCensista,
							listadoCensistas[2].nombre,
							listadoCensistas[2].edad,
							listadoCensistas[2].telefono);

				}
			}
		}

	}

	return 0;

}
int buscarId(vivienda *listadoVivienda, int longitud, int idVivienda) {
	int i;
	int posicion = -1;
	for (i = 0; i < longitud; i++) {
		if (listadoVivienda[i].idVivienda == idVivienda) {
			posicion = i;
			i = longitud + 1;
		}
	}
	return posicion;
}

int borrarPosiciones(vivienda *listadoVivienda, int longitud, int idVivienda) {
	int buscarPosicion;
	int retorno = 0;

	buscarPosicion = buscarId(listadoVivienda, longitud, idVivienda);
	listadoVivienda[buscarPosicion].isEmpty = -1;
	if (buscarPosicion == -1) {
		retorno = -1;
	}
	return retorno;

}

int ordenarViviendas(vivienda *listadoViviendas, int longitud) {
	int i;
	int j;
	vivienda auxLista;
	for (i = 0; i < longitud; i++) {

		for (j = +1; i < longitud; i++) {
			if (listadoViviendas[j].isEmpty != -1) {
				if (strcmp(listadoViviendas[i].calle, listadoViviendas[j].calle)
						== 1) {
					auxLista = listadoViviendas[i];
					listadoViviendas[i] = listadoViviendas[j];
					listadoViviendas[j] = auxLista;
				} else {
					if (strcmp(listadoViviendas[i].calle,
							listadoViviendas[j].calle) == 0) {
						if (listadoViviendas[i].cantidadPersonas
								< listadoViviendas[j].cantidadPersonas) {
							auxLista = listadoViviendas[i];
							listadoViviendas[i] = listadoViviendas[j];
							listadoViviendas[j] = auxLista;
						}

					}
				}
			}

		}
	}

	return 0;
}

