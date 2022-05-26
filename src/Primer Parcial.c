/*
 ============================================================================
 Name        : Primer.c
 Author      : Abril Uberti, div d
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include<stdio.h>
#include <stdlib.h>
#include "input.h"
#include <string.h>
#include "vivienda.h"
#include "censista.h"

int main(void) {
	setbuf(stdout, NULL);

	int longitud = 100;
	int opc;
	int retorno;
	vivienda listadoViviendas[longitud];
	censista listadoCensistas[3];
	char calle[25];
	int cantidadPersonas;
	int cantidadHabitaciones;
	int tipoVivienda;
	int legajoCensista;
	int id = 20000;
	int idABuscar;
	int buscarPosicion;
	int respuestaMenu2daOpcion;
	int borrarPosicion;
	int idABorrar;
	int tipoBusqueda;
	int banderaCargaV = 0;
	int validar;

	inicializarVivienda(listadoViviendas, longitud);
	inicializacionCensistas(listadoCensistas);
	do {

		retorno =
				utn_getInt(&opc,
						"\n----------------------------------------|MENU DE OPCIONES|----------------------------------------"
						"\n1-Alta de vivienda "
						"\n2-Modicacion"
						"\n3-Baja vivienda "
						"\n4-Listar Viviendas "
						"\n5-Listar Cencista "
						"\n6-Salir \n",
						"Ingreso una opcion invalida", 1, 6, 3);
		if (retorno != -1) {

			switch (opc) {
			case 1:
				printf("\nAltas");
				validar = utn_getTexto(calle, "\ningrese la calle:", "Error");
				if (validar == -1) {
					printf("volviendo al menu \n");
					break;
				}
				validar = utn_getInt(&cantidadPersonas,
						"\ningrese la cantidad de personas: \n", "Error", 1, 20,
						3);
				if (validar == -1) {
					printf("volviendo al menu \n");
					break;
				}
				validar = utn_getInt(&cantidadHabitaciones,
						"\n ingrese la cantidad de habitaciones: \n ", " Error",
						1, 20, 3);
				if (validar == -1) {
					printf("volviendo al menu \n");
					break;
				}
				validar =
						utn_getInt(&tipoVivienda,
								"\n ingrese el tipo de vivienda \n 1-casa\n 2-departamento\n 3-casilla\n 4-rancho \n",
								"Error", 1, 4, 3);
				if (validar == -1) {
					printf("volviendo al menu \n");
					break;
				}
				validar = utn_getInt(&legajoCensista,
						"\n ingrese el legajo censista \n", " Error", 1, 1000,
						3);
				if (validar == -1) {
					printf("volviendo al menu \n");
					break;
				}
				id++;
				banderaCargaV = 1;
				cargarVivienda(listadoViviendas, longitud, id, calle,
						cantidadPersonas, cantidadHabitaciones, tipoVivienda,
						legajoCensista);

				break;
			case 2:
				if (banderaCargaV == 0) {
					printf("\n Debe cargar al menos una vivienda");
					break;
				}
				printf("\nModificaciones");
				getInt(&idABuscar, "\nIngrese la ID que se va a MODIFICAR\n");
				buscarPosicion = buscarId(listadoViviendas, longitud,
						idABuscar);
				if (validar == -1) {
					printf("volviendo al menu \n");
					break;
				}
				if (buscarPosicion == -1) {
					printf("Aun no existe ese id");
					break;
				}

				else {
					do {
						printf(
								"\n1- Modificar la calle.\n"
										"2- Modificar la cantidad de las personas.\n"
										"3- Modificar cantidad de habitaciones.\n"
										"4- Modificar el tipo de vivienda 1-casa, 2-departamento, 3-casilla, 4-rancho.\n"
										"5- Salir.\n"
										"\nIngrese la opcion deseada.\n");

						scanf("%d", &respuestaMenu2daOpcion);
						fflush(stdin);

						switch (respuestaMenu2daOpcion) {
						case 1:
							validar = utn_getTexto(
									listadoViviendas[buscarPosicion].calle,
									"Ingrese la calle:", "error");
							if (validar == -1) {
								printf("volviendo al menu \n");
								break;
							}
							break;
						case 2:
							validar =
									utn_getInt(
											&listadoViviendas[buscarPosicion].cantidadPersonas,
											"Ingrese la cantidad de personas: ",
											"error", 1, 20, 3);
							if (validar == -1) {
								printf("volviendo al menu \n");
								break;
							}
							break;

						case 3:
							validar =
									utn_getInt(
											&listadoViviendas[buscarPosicion].cantidadHabitaciones,
											"Ingrese la cantidad de personas: ",
											"error", 1, 20, 3);
							if (validar == -1) {
								printf("volviendo al menu \n");
								break;
							}
							break;

						case 4:
							validar =
									utn_getInt(
											&listadoViviendas[buscarPosicion].tipoVivienda,
											"Ingrese el tipo de vivienda \n1-casa \n 2-departamento\n 3-casilla\n 4-rancho\n:",
											"error", 1, 4, 3);
							if (validar == -1) {
								printf("volviendo al menu \n");
								break;
							}
							break;

						case 5:

							printf("\nSaliendo al menu\n.");
							break;
						default:
							printf("opcion no valida");
						}
					} while (respuestaMenu2daOpcion != 5);
				}
				break;
			case 3:
				if (banderaCargaV == 0) {
					printf("\nDebe cargar al menos una vivienda");
					break;
				}
				printf("\nBaja");
				getInt(&idABorrar, "\nIngrese la ID que se va a BORRAR\n");

				listadoViviendas[buscarPosicion].isEmpty = -1;
				borrarPosicion = borrarPosiciones(listadoViviendas, longitud,
						idABorrar);
				if (borrarPosicion == -1) {
					printf("Aun no existe");
					break;
				}
				printf("se borro correctamente");
				break;
			case 4:
				if (banderaCargaV == 0) {
					printf("\nDebe cargar al menos una vivienda");
					break;
				}
				printf("\nListar");
				getInt(&tipoBusqueda, "\n1-Ordenar por calle.");

				ordenarViviendas(listadoViviendas, longitud);
				listarViviendass(listadoViviendas, longitud);

				break;

			case 5:

				printf("\n Elegiste Listar Censistas");
				listadoDeCensistas(listadoCensistas, 3);
				break;

			case 6:
				printf("\nGracias por su visita");
				break;
			}
		}

	} while (opc != 6);

	return 0;
}

