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
/// @brief inicializacion de lista censista
///
/// @pre
/// @post
/// @param listadoCensistas
void inicializacionCensistas(censista *listadoCensistas);
/// @brief listado de censistas harcodeados
///
/// @pre
/// @post
/// @param listaCensistas
/// @param longitud
/// @return
int listadoDeCensistas(censista *listaCensistas, int longitud);

#endif /* CENSISTA_H_ */
