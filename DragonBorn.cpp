#include "DragonBorn.h"

DragonBorn::DragonBorn(string nom){
	nombre = nom;
	hp = 200;

	xp = 0;
	defensaMagica = 0.20;
	defensaFisica = 0.20;
	expNecesaria = 400;
	expEntregada = 150;
	Dfis = 'f';
	Dmag = 'f';
}

int DragonBorn::ataqueFisico(){
	return 23;
}

int DragonBorn::ataqueMagico(){
	return 25;
}

void DragonBorn::defensa(){
	hp += hp*0.45;
	Dfis = 'v';
	Dmag = 'v';
}

void DragonBorn::habilidad(){

}
