/*
 * LecturaFichero.h
 *
 *  Created on: 7/5/2019
 *      Author: ALUMNO
 */

#ifndef LECTURAFICHERO_H_
#define LECTURAFICHERO_H_
#include "barco.h"

class LecturaFichero
{
	public:
	static void leerDeFichero(char* nomPartida, char* nom1, char* nom2, barco* barcos1, barco* barcos2, int* numeroDeBarcos);
};

#endif



