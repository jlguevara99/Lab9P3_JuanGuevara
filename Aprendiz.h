#ifndef APRENDIZ_H
#define APRENDIZ_H
#include "Luchador.h"

class Aprendiz : public Luchador{

	public:
		Aprendiz(string);
		
		int ataqueFisico();
		int ataqueMagico();

		void defensa(double);
		void habilidad();
};


#endif
