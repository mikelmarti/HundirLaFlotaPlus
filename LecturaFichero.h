/*
 * LecturaFichero.h
 *
 *  Created on: 7/5/2019
 *      Author: ALUMNO
 */


class LecturaFichero
	{

	private:

	barco *listabarcos;
	unsigned int cantidad; //dependera del tamaino de la partida
    char nombreJugador;  //se creara una de estas para cada jugador

	public:




	unsigned int getCantidad() const {
		return cantidad;
	}

	void setCantidad(unsigned int cantidad) {
		this->cantidad = cantidad;
	}

	const barco*& getListabarcos() const {
		return listabarcos;
	}

	void setListabarcos(const barco*& listabarcos) {
		this->listabarcos = listabarcos;
	}

	char getNombreJugador() const {
		return nombreJugador;
	}

	void setNombreJugador(char nombreJugador) {
		this->nombreJugador = nombreJugador;
	}
};
