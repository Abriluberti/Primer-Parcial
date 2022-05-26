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
/// @brief inicializacion de lista vivienda
///
/// @pre
/// @post
/// @param listadoVivienda
/// @param longitud
/// @return
int inicializarVivienda(vivienda *listadoVivienda, int longitud);
/// @brief  ingresa de datos de una vivienda
///
/// @pre
/// @post
/// @param listadoVivienda
/// @param longitud
/// @param id
/// @param calle
/// @param cantidadPersonas
/// @param cantidadHabitaciones
/// @param tipoVivienda
/// @param legajoCensista
/// @return
int cargarVivienda(vivienda *listadoVivienda, int longitud, int id,
char calle[], int cantidadPersonas, int cantidadHabitaciones,
int tipoVivienda, int legajoCensista);
/// @brief el listado de las viviendas por calle ante igualdad por cantidad de personas
///
/// @pre
/// @post
/// @param listadoVivienda
/// @param longitud
/// @return
int listarViviendass(vivienda *listadoVivienda, int longitud);
/// @brief busca la posicion del id y la retorna
///
/// @pre
/// @post
/// @param listadoVivienda
/// @param longitud
/// @param idVivienda
/// @return posicion del id
int buscarId(vivienda *listadoVivienda, int longitud, int idVivienda);
/// @brief borra el id en la posicion encontrada
///
/// @pre
/// @post
/// @param listadoVivienda
/// @param longitud
/// @param idVivienda
/// @return retorna 0 en caso de haberlo borralo y -1 en caso de no hacerlo.
int borrarPosiciones(vivienda *listadoVivienda, int longitud, int idVivienda);
/// @brief ordena las viviendas segun calle
///
/// @pre
/// @post
/// @param listadoViviendas
/// @param longitud
/// @return
int ordenarViviendas(vivienda *listadoViviendas, int longitud);

#endif /* VIVIENDA_H_*/

