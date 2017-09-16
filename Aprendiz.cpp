#include "Aprendiz.h"

Aprendiz::Aprendiz(string p){
	nombre = p;
	hp = 60;
	xp = 400;
	defensaMagica = 0;
	defensaFisica = 0.10;
	expNecesaria = 400;
	expEntregada = 25;
	Dmag = 'f';
	Dfis = 'f';
}

int Aprendiz::ataqueFisico(){
	return 10;
}

int Aprendiz::ataqueMagico(){
	return 0;
}

void Aprendiz::defensa(){
	hp += hp*0.45;
	Dfis = 'v';
}

void Aprendiz::habilidad(){
	expEntregada = expEntregada*2;
}
