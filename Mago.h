#ifndef MAGO_H
#define MAGO_H

#include "Luchador.h"

class Mago : public Luchador{
	public:
		Mago(string);

		int ataqueFisico();
		int ataqueMagico();

		void defensa();
		void habilidad();
};


#endif
