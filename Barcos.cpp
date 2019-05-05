/*
 * Barcos.cpp
 *
 *  Created on: 5/5/2019
 *      Author: ALUMNO
 */

#include <Barcos.h>


Barcos :: Barcos ()
{
longitud=0;
Barcos = new char [0];
}

Barcos :: Barcos (unsigned int longitud)
{
	this->longitud=longitud;
	arrayBarcos=new int [longitud];
}
