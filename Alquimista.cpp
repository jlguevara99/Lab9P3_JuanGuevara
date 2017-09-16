#include "Alquimista.h"

Alquimista::Alquimista(string nom){
	nombre = nom;
	hp = 130;
	defensaMagica = 0.20;
	defensaFisica = 0.20;
	expNecesaria = 300;
	expEntregada = 100;
	xp = 300;
	Dmag = 'f';
	Dfis = 'f';
}

int Alquimista::ataqueFisico(){
	return 10;
}

int Alquimista::ataqueMagico(){
	return 10;
}

void Alquimista::defensa(){
	hp += hp*0.45;
	Dmag = 'v';
	Dfis = 'v';
}

void Alquimista::habilidad(){

}
