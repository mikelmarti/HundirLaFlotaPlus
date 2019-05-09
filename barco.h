/*
 * barco.h
 *
 *  Created on: 5/5/2019
 *      Author: ALUMNO
 */


class barco
	{
		private:
			char Letraini;
			char Letrafin;
			int numcasillas;
			int numini;
			int numfin;

		public :

			barco :: barco (char LF, char LI, int NC, int NI, int NF);

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
