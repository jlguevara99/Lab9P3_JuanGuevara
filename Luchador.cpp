#include "Luchador.h"

Luchador::Luchador(){
	nombre = "si";
	batallas = 2;

}
void Luchador::setXPE(int xpx){
	expEntregada = xpx;
}

string Luchador::getNombre(){
	return nombre;
}

int Luchador::getBatallas(){
	return batallas;
}

vector<string> Luchador::getClases(){
	return clases;
}

int Luchador::getXP(){
	return xp;
}

void Luchador::setNombre(string pNom){
	nombre = pNom;
}

void Luchador::setBatallas(int battle){
	batallas = battle;
}

void Luchador::setClases(vector<string> claze){
	clases = claze;
}

void Luchador::setXP(int nxp){
	xp = nxp;
}

int Luchador::getHp(){
	return hp;
}

void Luchador::setHp(int pHp){
	hp = pHp;
}

double Luchador::getdefensaM(){
	return defensaMagica;
}
double Luchador::getdefensaF(){
	return defensaFisica;
}
int Luchador::getXPN(){
	return expNecesaria;
}
int Luchador::getXPE(){
	return expEntregada;
}

//funciones

int Luchador::ataqueFisico(){
	return 0;
}

int Luchador::ataqueMagico(){
	return 0;
}

void Luchador::defensa(){

}

void Luchador::habilidad(){

}

char Luchador::getdmag(){
	return Dmag;
}

char Luchador::getdfis(){
	return Dfis;
}

void Luchador::setdmag(char bandera){
	Dmag = bandera;
}

void Luchador::setdfis(char bandera){
	Dfis = bandera;
}
