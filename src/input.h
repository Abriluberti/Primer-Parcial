/*
 * input.h
 *
 *  Created on: 23 may. 2022
 *      Author: Abril uberti, div d
 */

#ifndef INPUT_H_
#define INPUT_H_
/// @brief
///
/// @pre
/// @post
/// @param cadena
/// @param longitud
/// @return
int myGets(char *cadena, int longitud);
/// @brief
///
/// @pre
/// @post
/// @param pResultado
/// @param textoAMostrar
/// @return
int getInt(int *pResultado, char textoAMostrar[]);
/// @brief
///
/// @pre
/// @post
/// @param cadena
/// @return
int esNumerica(char *cadena);
/// @brief
///
/// @pre
/// @post
/// @param pResultado
/// @param mensaje
/// @param mensajeError
/// @param minimo
/// @param maximo
/// @param reintentos
/// @return
int utn_getInt(int *pResultado, char *mensaje, char *mensajeError, int minimo,
		int maximo, int reintentos);
/// @brief
///
/// @pre
/// @post
/// @param pResultado
/// @param mensaje
/// @param mensajeError
/// @param minimo
/// @param maximo
/// @return
int utn_getFloat(float *pResultado, char *mensaje, char *mensajeError,
		float minimo, float maximo);
/// @brief
///
/// @pre
/// @post
/// @param pResultado
/// @return
int getFloat(float *pResultado);
/// @brief
///
/// @pre
/// @post
/// @param stringRecibido
/// @return
int isValidTexto(char *stringRecibido);
/// @brief
///
/// @pre
/// @post
/// @param pCadena
/// @param mensaje
/// @param mensajeError
/// @return
int utn_getTexto(char *pCadena, char *mensaje, char *mensajeError);

#endif /* INPUT_H_*/
