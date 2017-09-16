#include "Mago.h"

Mago::Mago(string nom){
	nombre = nom;
	hp = 100;
	defensaMagica = 0.30;
	defensaFisica = 0;
	expNecesaria = 200;
	expEntregada = 75;
	xp = 200;
	Dmag = 'f';
	Dfis = 'f';
}

int Mago::ataqueFisico(){
	return 0;
}

int Mago::ataqueMagico(){
	return 15;
}

void Mago::defensa(){
	hp += hp*0.45;
	Dmag = 'v';
}

void Mago::habilidad(){

}
