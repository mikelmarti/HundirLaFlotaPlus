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
//	char letraCom=' ';
//	char letraFin=' ';
//	int tamanyo=0;
//	int numCom=0;
//	int numFin=0;
//	int opcion=0;
//
//	FILE * fic;
//	fic=fopen("HLF.txt", "r");
//
//	fscanf(fic, "%i", &opcion);
//	int num=opcion*2+3;
//	*numeroDeBarcos=num;
//
//	fscanf(fic, "%[^\n]", nomPartida);
//	cout<<nomPartida<<endl;
//	fscanf(fic, "%[^\n]", nom1);
//	fscanf(fic, "%[^\n]", nom2);
//	//hona arte erroreik ez
//	cout<<nom1<<endl;
//	cout<<nom2<<endl;
//	cout<<nomPartida<<endl;
//
//
//	for(int i=0; i<num; i++)
//	{
////		letraCom = (barcos1+i)->letraCom;
////		letraFin = (barcos1+i)->letraFin;
////		tamanyo = (barcos1+i)->tamanyo;
////		numCom = (barcos1+i)->numCom;
////		numFin = (barcos1+i)->numFin;
//
//		fscanf(fic, "%c\n", &letraCom);
//		fscanf(fic, "%c\n", &letraFin);
//		fscanf(fic, "%i\n", &tamanyo);
//		fscanf(fic, "%i\n", &numCom);
//		fscanf(fic, "%i\n", &numFin);
//
//		barco * nuevoBarco = new barco(letraFin, letraCom, tamanyo, numCom, numFin);
////		fgets(CletraCom, 2, fic);
////		fgets(CletraFin, 2, fic);
////		fgets(Ctamanyo, 2, fic);
////		fgets(CnumCom, 2, fic);
////		fgets(CnumFin, 2, fic);
//		*(barcos1+i)=*nuevoBarco;
//	}
//
//	for(int i=0; i<num; i++)
//	{
//	//		letraCom = (barcos1+i)->letraCom;
//	//		letraFin = (barcos1+i)->letraFin;
//	//		tamanyo = (barcos1+i)->tamanyo;
//	//		numCom = (barcos1+i)->numCom;
//	//		numFin = (barcos1+i)->numFin;
//
//			fread(&letraCom, sizeof(char),1,fic);
//			fread(&letraFin, sizeof(char),1,fic);
//			fread(&tamanyo, sizeof(int),1,fic);
//			fread(&numCom, sizeof(int),1,fic);
//			fread(&numFin, sizeof(int),1,fic);
//
//			barco * nuevoBarco = new barco(letraFin, letraCom, tamanyo, numCom, numFin);
//	//		fgets(CletraCom, 2, fic);
//	//		fgets(CletraFin, 2, fic);
//	//		fgets(Ctamanyo, 2, fic);
//	//		fgets(CnumCom, 2, fic);
//	//		fgets(CnumFin, 2, fic);
//			*(barcos2+i)=*nuevoBarco;
//	}
//	fclose(fic);
}

