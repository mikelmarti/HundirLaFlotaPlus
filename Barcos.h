/*
 * Barcos.h
 *
 *  Created on: 5/5/2019
 *      Author: ALUMNO
 */
#ifndef BARCOS_H_
#define BARCOS_H_

class Barcos
	{
	private:

	//CHAR BEHARREAN KLASE BAT "BARCO"
		char *arrayBarcos;
		unsigned int longitud= 0;

		// longitud dependera del tamaño de la partida

	public:

		Barcos :: Barcos ();
		Barcos :: Barcos (unsigned int longitud);

	};

#endif /* BARCOS_H_ */
