/*
 * censista.h
 *
 *  Created on: 24 may. 2022
 *      Author: Abril Uberti, div d
 */

#ifndef CENSISTA_H_
#define CENSISTA_H_
typedef struct {
	int legajoCensista;
	char nombre[25];
	int edad;
	char telefono[20];
} censista;

void inicializacionCensistas(censista *listadoCensistas);
int listadoDeCensistas(censista *listaCensistas, int longitud);

#endif /* CENSISTA_H_ */
