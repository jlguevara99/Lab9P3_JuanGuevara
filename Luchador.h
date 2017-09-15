#ifndef LUCHADOR_H
#define LUCHADOR_H

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Luchador{
	protected:
		string nombre;
		int batallas;
		vector<string> clases;
		int xp;


		//cosas
		int hp;
		
		double defensaMagica;
		double defensaFisica;
		int expNecesaria;
		int expEntregada;
	public:
		Luchador();
		
		string getNombre();
		int getBatallas();
		vector<string> getClases();
		int getXP();

		void setNombre(string);
		void setBatallas(int);
		void setClases(vector<string>);
		void setXP(int);

		//cosas

		int getHp();
		double getdefensaM();
		double getdefensaF();
		int getXPN();
		int getXPE();

		//funciones 
		virtual int ataqueFisico();
		virtual int ataqueMagico();

		//virtual int defensa(double);
		//virtual void habilidad();

};


#endif
