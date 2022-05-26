/*
 * Operaciones.h
 *
 *  Created on: 23 may. 2022
 *      Author: Abril Uberti, div d
 */

#ifndef VIVIENDA_H_
#define VIVIENDA_H_

typedef struct {
	int idVivienda;
	char calle[25];
	int cantidadPersonas;
	int cantidadHabitaciones;
	int tipoVivienda;
	int legajoCensista;
	int isEmpty;
} vivienda;

int inicializarVivienda(vivienda *listadoVivienda, int longitud);
int cargarVivienda(vivienda *listadoVivienda, int longitud, int id,
		char calle[], int cantidadPersonas, int cantidadHabitaciones,
		int tipoVivienda, int legajoCensista);
int listarViviendass(vivienda *listadoVivienda, int longitud);
int buscarId(vivienda *listadoVivienda, int longitud, int idVivienda);
int borrarPosiciones(vivienda *listadoVivienda, int longitud, int idVivienda);
int ordenarViviendas(vivienda *listadoViviendas, int longitud);

#endif /* VIVIENDA_H_*/

