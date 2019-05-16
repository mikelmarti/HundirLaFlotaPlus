/*
 * main.cpp

 *
 *  Created on: 5/5/2019
 *      Author: ALUMNO
 */
#include "LecturaFichero.h"
#include "barco.h"
#include <iostream>
using namespace std;
#include "interaccion.h"

//leer los primeros tres datos del fichero

int main ()
{
	bool acaba=false;
	char nom1[40];
	char nom2[40];
	char nomPartida[40];
	barco barcos1[9];
	barco barcos2[9];
	bool tiros1[100];
	bool tiros2[100];
	int * numeroDeBarcos=(int*)malloc(sizeof(char));
	int numeroNecesarioDeAciertos=0;

	//boolean arrayak falsen inizializatu
	for(int i=0; i<100; i++)
	{
		tiros1[i]=false;
		tiros2[i]=false;
	}

	LecturaFichero::leerDeFichero(nomPartida,nom1,nom2, barcos1,barcos2, numeroDeBarcos);

	switch(*numeroDeBarcos)
	{
	case 5: numeroNecesarioDeAciertos=16;
		break;
	case 7: numeroNecesarioDeAciertos=21;
		break;
	case 9: numeroNecesarioDeAciertos=27;
		break;
	}

	cout << " Se han cargado los Ficheros de ambos jugadores" <<  endl;

	do{
	interaccion::mapaConTiros(barcos1, tiros1, *numeroDeBarcos);
	interaccion::hacerMovimiento(nom1,tiros1);
	acaba = interaccion::haTerminado(tiros1, numeroNecesarioDeAciertos);
	if(acaba)
	{
		cout << "Has ganado, " << nom1 << "! Enhorabuena!";
		cout << endl;
	}

	interaccion::mapaConTiros(barcos2, tiros2, *numeroDeBarcos);
	interaccion::hacerMovimiento(nom2, tiros2);
	acaba = interaccion::haTerminado(tiros1, numeroNecesarioDeAciertos);
	if(acaba)
	{
		cout << "Has ganado, " << nom2 << "! Enhorabuena!";
		cout << endl;
	}
	}while(!acaba);
}
