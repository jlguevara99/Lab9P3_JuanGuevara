#include "Guerrero.h"

Guerrero::Guerrero(string nom){
	hp = 120;
	nombre = nom;
	defensaMagica = 0;
	defensaFisica= 0.30;
	expNecesaria = 0;
	expEntregada = 75;
	xp = 0;
	Dmag = 'f';
	Dfis = 'f';
}

int Guerrero::ataqueFisico(){
	return 15;
}

int Guerrero::ataqueMagico(){
	return 0;
}

void Guerrero::defensa(){
	hp += hp*0.45;
	Dfis = 'v';
}

void Guerrero::habilidad(){
	hp = hp+40;
}
