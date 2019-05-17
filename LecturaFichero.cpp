/*
 * LecturaFichero.cpp
 *
 *  Created on: 7/5/2019
 *      Author: ALUMNO
 */

#include <stdio.h>
#include <iostream>
using namespace std;
#include "LecturaFichero.h"
#include "barco.h"
#include <string.h>

void LecturaFichero::leerDeFichero(char* nomPartida, char* nom1, char* nom2, barco* barcos1, barco* barcos2, int* numeroDeBarcos)
{
	char letraCom=' ';
	char letraComCopia=' ';
	char letraFin=' ';
	char letraFinCopia=' ';
	int tamanyo=0;
	int tamanyoCopia=0;
	int numCom=0;
	int numComCopia=0;
	int numFin=0;
	int numFinCopia=0;
	int opcion;


	FILE * fic;
	fic=fopen("HLF.txt", "r");

	fscanf(fic, "%i", &opcion);
	int num=opcion*2+3;
	*numeroDeBarcos=num;

	fscanf(fic, "%s", nomPartida);
	fscanf(fic, "%s", nom1);
	fscanf(fic, "%s", nom2);

	for(int i=0; i<num; i++)
	{
		fscanf(fic, "%s", &letraCom);
		letraComCopia = letraCom;
		fscanf(fic, "%s", &letraFin);
		letraFinCopia = letraFin;
		fscanf(fic, "%i", &tamanyo);
		tamanyoCopia = tamanyo;
		fscanf(fic, "%i", &numCom);
		numComCopia = numCom;
		fscanf(fic, "%i", &numFin);
		numFinCopia = numFin;

		barco * nuevoBarco = new barco(letraFinCopia, letraComCopia, tamanyoCopia, numComCopia, numFinCopia);

		*(barcos1+i)=*nuevoBarco;

	}

	for(int i=0; i<num; i++)
	{
		fscanf(fic, "%s", &letraCom);
		letraComCopia = letraCom;
		fscanf(fic, "%s", &letraFin);
		letraFinCopia = letraFin;
		fscanf(fic, "%i", &tamanyo);
		tamanyoCopia = tamanyo;
		fscanf(fic, "%i", &numCom);
		numComCopia = numCom;
		fscanf(fic, "%i", &numFin);
		numFinCopia = numFin;

		barco * nuevoBarco = new barco(letraFinCopia, letraComCopia, tamanyoCopia, numComCopia, numFinCopia);
		*(barcos2+i)=*nuevoBarco;

	}

	fclose(fic);

}

