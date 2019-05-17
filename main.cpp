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
#include <windows.h>
//leer los primeros tres datos del fichero
void animacionFin();
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
	bool aciertos1[100];
	bool aciertos2[100];

	int * numeroDeBarcos=(int*)malloc(sizeof(char));
	int numeroNecesarioDeAciertos=0;

	//boolean arrayak falsen inizializatu
	for(int i=0; i<100; i++)
	{
		tiros1[i]=false;
		tiros2[i]=false;
		aciertos1[i]=false;
		aciertos2[i]=false;
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
	interaccion::hacerMovimiento(nom1,tiros1, barcos1, aciertos1, *numeroDeBarcos);
	acaba = interaccion::haTerminado(aciertos1, numeroNecesarioDeAciertos);
	if(acaba)
	{
		interaccion::mapaConTiros(barcos1, tiros1, *numeroDeBarcos);
		cout << "Has ganado, " << nom1 << "! Enhorabuena!";
		cout << endl;
	}

	interaccion::mapaConTiros(barcos2, tiros2, *numeroDeBarcos);
	interaccion::hacerMovimiento(nom2, tiros2, barcos2, aciertos2, *numeroDeBarcos);
	acaba = interaccion::haTerminado(aciertos2, numeroNecesarioDeAciertos);
	if(acaba)
	{
		interaccion::mapaConTiros(barcos2, tiros2, *numeroDeBarcos);
		cout << "Has ganado, " << nom2 << "! Enhorabuena!";
		cout << endl;
	}
	}while(!acaba);
}

void animacionFin()
{
	for(int i=0;i<50;i++)
	{
		cout<< "     *     G"<<endl;
		Sleep(50);
		cout<< "     *       A"<<endl;
		Sleep(50);
		cout<< "    * *        N"<<endl;
		Sleep(50);
		cout<< "   *   *         A"<<endl;
		Sleep(50);
		cout<< "  *     *          S"<<endl;
		Sleep(50);
		cout<< " *       *           T"<<endl;
		Sleep(50);
		cout<< "  *     *              E"<<endl;
		Sleep(50);
		cout<< "   *   *                 !"<<endl;
		Sleep(50);
		cout<< "    * *                    !"<<endl;
		Sleep(50);
		cout<< "     *                       !"<<endl;
		Sleep(50);
		cout<< "     *                         !"<<endl;
		Sleep(50);
	}

}
