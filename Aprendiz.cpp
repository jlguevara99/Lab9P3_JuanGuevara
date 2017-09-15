#include "Aprendiz.h"

Aprendiz::Aprendiz(string p){
	nombre = p;
	hp = 60;
	xp = 0;
	defensaMagica = 0;
	defensaFisica = 0.10;
	expNecesaria = 400;
	expEntregada = 25;
}

int Aprendiz::ataqueFisico(){
	return 10;
}

int Aprendiz::ataqueMagico(){
	return 0;
}

void Aprendiz::defensa(double def){
	hp += hp*0.45;
}

void Aprendiz::habilidad(){
	expEntregada = expEntregada*2;
}
