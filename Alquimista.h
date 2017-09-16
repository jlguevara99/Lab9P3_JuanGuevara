#ifndef ALQUIMISTA_H
#define ALQUIMISTA_H

#include "Luchador.h"

class Alquimista : public Luchador{
	public: 
		Alquimista(string);
		
		int ataqueFisico();
		int ataqueMagico();

		void defensa();
		void habilidad();

};

#endif
