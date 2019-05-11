/*
 * barco.cpp
 *
 *  Created on: 5/5/2019
 *      Author: ALUMNO
 */
#include "barco.h"
barco :: barco()
{
	this->letraFin='A';
	this->letraIni ='A';
	this->numCasillas = 0;
	this->numFin= 0;
	this->numIni= 0;
}

barco :: barco (char letraFin, char letraIni, int numCasillas, int numIni, int numFin)
{
	this->letraFin=letraFin;
	this->letraIni = letraIni;
	this->numCasillas = numCasillas;
	this->numFin= numFin;
	this->numIni=numIni;
}
barco::~barco()
{

}
char barco::getLetrafin() const
{
	return this->letraFin;
}
void barco::setLetrafin(char letrafin)
{
	this->letraFin=letrafin;
}
char barco::getLetraini() const
{
	return this->letraIni;
}
void barco::setLetraini(char letraini)
{
	this->letraIni=letraini;
}
int barco::getNumcasillas() const
{
	return this->numCasillas;
}
void barco::setNumcasillas(int numcasillas)
{
	this->numCasillas=numcasillas;
}
int barco::getNumfin() const
{
	return this->numFin;
}
void barco::setNumfin(int numfin)
{
	this->numFin=numfin;
}
int barco::getNumini() const
{
	return this->numIni;
}
void barco::setNumini(int numini)
{
	this->numIni=numini;
}
