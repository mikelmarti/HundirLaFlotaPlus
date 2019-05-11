/*
 * interaccion.cpp
 *
 *  Created on: 11/5/2019
 *      Author: ALUMNO
 */

/*
 * interaccion.c
 *
 *  Created on: 9/4/2019
 *      Author: ALUMNO
 */

#include <stdio.h>
#include "interaccion.h"
#include <stdbool.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void interaccion::mapa()
{
	printf("    A   B   C   D   E   F   G   H   I   J\n");
	for(int e=0;e<10;e++)
	{
		for(int i=0;i<43;i++)
		{
			printf("-");
		}
		printf("\n");
		if(e==9)
		{
			printf("%d", e+1);
		}
		else
		{
			printf(" %d", e+1);

		}
		printf("|");
		for(int i=0;i<40;i++)
		{
			if((i==3)||(i==7)||(i==11)||(i==15)||(i==19)||(i==23)||(i==27)||(i==31)||(i==35)||(i==39))
			{
				printf("|");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

void interaccion::mapaConBarcos(barco* barcos, int num)
{
	int col=0;
	printf("    A   B   C   D   E   F   G   H   I   J\n");
	for(int e=0;e<10;e++)
	{
		for(int i=0;i<43;i++)
		{
			printf("-");
		}
		printf("\n");
		if(e==9)
		{
			printf("%d", e+1);
		}
		else
		{
			printf(" %d", e+1);
		}
		printf("|");
		for(int i=0;i<10;i++)
		{
			if(hayBarcos(barcos, num, e+1, col))
			{
				printf(" X |");
			}
			else
			{
				printf("   |");
			}
			col++;
		}
		col=0;
		printf("\n");
	}
}

bool interaccion::hayBarcos(barco * barcos, int num, int fila, int col)
{
	bool ret=false;
	for(int i=0; i<num; i++)
	{
		ret=hayBarco(*(barcos+i), fila, col);
		if(ret)break;
	}
	return ret;
}

bool interaccion::hayBarco(barco b, int fila, int col)
{
	int letraComNumerizado = numerizarLetra(b.getLetraini());
	int letraFinNumerizado = numerizarLetra(b.getLetrafin());
	int numCom = b.getNumini();
	int numFin =b.getNumfin();
	if(fila<=numFin&&fila>=numCom&&col<=letraFinNumerizado&&col>=letraComNumerizado)return true;
	//if(((fila>=numCom)&&(fila<=numFin)&&(col==letraComNumerizado))||((col>=letraComNumerizado)&&(col<=letraFinNumerizado)&&(fila==numCom))) return true;
	return false;
}

int interaccion::numerizarLetra(char c)
{

	switch(c)
	{
	case 'A': return 0;
		break;
	case 'B': return 1;
			break;
	case 'C': return 2;
			break;
	case 'D': return 3;
			break;
	case 'E': return 4;
			break;
	case 'F': return 5;
			break;
	case 'G': return 6;
			break;
	case 'H': return 7;
			break;
	case 'I': return 8;
			break;
	case 'J': return 9;
			break;
	}
	return 0;
}

void interaccion::hacerMovimiento(char* jugador, bool*tiros)
{
	char col=' ';
	int colNumerizado=0;
	int fila=0;
	bool existeCol=false;
	bool existeFil=false;

	int tiroDefinitivo=0;

	cout << "Es tu turno, " << jugador <<"!";
	cout<< endl;

	do
	{
		cout << "Introduce la columna a bombardear! (A-J)"<< endl;
		cin >> col;
		col = uppercase(col);
		colNumerizado = numerizarLetra(col);
		existeCol=existeColumna(col);
		if(!existeCol) printf("Cuidado, ¡esa columna no existe!\n");
	}while(!existeCol);

	do
	{
		cout << "Introduce la fila a bombardear! (1-10)"<< endl;
		cin >> fila;
		existeFil=existeFila(fila);
		if(!existeFil) printf("Cuidado, ¡esa fila no existe!\n");
	}while(!existeFil);

	tiroDefinitivo=(colNumerizado+(fila-1)*10)-1;
	tiros[tiroDefinitivo]=true;
}
char interaccion::uppercase(char a)
{
	if(a=='a') return 'A';
	if(a=='b') return 'B';
	if(a=='c') return 'C';
	if(a=='d') return 'D';
	if(a=='e') return 'E';
	if(a=='f') return 'F';
	if(a=='g') return 'G';
	if(a=='h') return 'H';
	if(a=='i') return 'I';
	if(a=='j') return 'J';
	else return a;
}
bool interaccion::existeColumna(char col)
{
	if(col=='a'||col=='A'||col=='b'||col=='B'||col=='c'||col=='C'||col=='d'||col=='D'||col=='e'||col=='E') return true;
	if(col=='f'||col=='F'||col=='g'||col=='G'||col=='h'||col=='H'||col=='i'||col=='I'||col=='j'||col=='J') return true;
	return false;
}
bool interaccion::existeFila(int fila)
{
	if((fila<=10)&&(fila>0)) return true;
	return false;
}

void interaccion::mapaConTiros(barco* barcos, bool* tiros, int num)
{
	int col=0;
	int tiro=0;
	printf("    A   B   C   D   E   F   G   H   I   J\n");
	for(int e=0;e<10;e++)
	{
		for(int i=0;i<43;i++)
		{
			printf("-");
		}
		printf("\n");
		if(e==9)
		{
			printf("%d", e+1);
		}
		else
		{
			printf(" %d", e+1);
		}
		printf("|");
		for(int i=0;i<10;i++)
		{
			if(tiros[tiro])
			{
				if(hayBarcos(barcos, num, e+1, col))
				{
					printf(" O |");
				}
				else
				{
					printf(" X |");
				}
			}
			else
			{
				printf("   |");
			}
			col++;
			tiro++;
		}
		col=0;
		printf("\n");
	}
}

bool interaccion::haTerminado(bool * tiros, int necesarios)
{
	int contador=0;
	for(int i=0; i<100; i++)
	{
		if(tiros[i]) contador++;
	}
	if(contador>=necesarios) return true;
	return false;

}
