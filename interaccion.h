/*
 * interaccion.h
 *
 *  Created on: 11/5/2019
 *      Author: ALUMNO
 */

#ifndef HUNDIRLAFLOTAPLUS_INTERACCION_H_
#define HUNDIRLAFLOTAPLUS_INTERACCION_H_

#include "barco.h"

class interaccion
{
	public:
	static void mapa();
	static void mapaConBarcos(barco* barcos, int num);
	static bool hayBarcos(barco * barcos, int num, int fila, int col);
	static bool hayBarco(barco b, int fila, int col);
	static int numerizarLetra(char c);
	static void hacerMovimiento(char* jugador, bool*tiros);
	static char uppercase(char a);
	static bool existeColumna(char col);
	static bool existeFila(int fila);
	static void mapaConTiros(barco* barcos, bool* tiros, int num);
	static bool haTerminado(bool * tiros, int necesarios);
};



#endif /* HUNDIRLAFLOTAPLUS_INTERACCION_H_ */
