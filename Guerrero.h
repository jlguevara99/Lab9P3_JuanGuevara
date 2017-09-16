#ifndef GUERRERO_H
#define GUERRERO_H
#include "Luchador.h"

class Guerrero : public Luchador{
	public:
		Guerrero(string);

		int ataqueFisico();
		int ataqueMagico();

		void defensa();
		void habilidad();
};


#endif
