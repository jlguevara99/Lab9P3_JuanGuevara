#ifndef DRAGONBORN_H
#define DRAGONBORN_H

#include "Luchador.h"

class DragonBorn : public Luchador{
	public:
		DragonBorn(string);

		int ataqueFisico();
		int ataqueMagico();

		void defensa();
		void habilidad();
};
#endif
