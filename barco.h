/*
 * barco.h
 *
 *  Created on: 5/5/2019
 *      Author: ALUMNO
 */

#ifndef BARCO_H_
#define BARCO_H_

class barco
{
	private:
	char letraIni;
	char letraFin;
	int numCasillas;
	int numIni;
	int numFin;

	public :

	barco();
	barco(char letraFin, char letraIni, int numCasillas, int numIni, int numFin);
	~barco();
	char getLetrafin() const;
	void setLetrafin(char letrafin) ;
	char getLetraini() const;
	void setLetraini(char letraini);
	int getNumcasillas() const;
	void setNumcasillas(int numcasillas);
	int getNumfin() const;
	void setNumfin(int numfin);
	int getNumini() const;
	void setNumini(int numini);
};
#endif
