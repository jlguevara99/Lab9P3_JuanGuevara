#include "LinkedList.h"
#include "Luchador.h"
#include "Aprendiz.h"
#include "Mago.h"
#include "Guerrero.h"
#include "Alquimista.h"
#include "DragonBorn.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int menu();

int main(){
	LinkedList lista;
	/*Luchador j;
	Luchador* j2 = new Aprendiz("s");
	lista.insert(j);
	lista.insert(10);
	lista.insert(23);

	cout<< lista.sacar() << endl;
	cout<< lista.sacar() << endl;
	cout<< lista.sacar() << endl;
	int a= j2->getHp();
	cout<<a<<endl;*/
	
	cout<< "<<<	JUAN GUEVARA-LAB9 >>>"<<endl<<endl<<endl;
	bool salir = true;
	do {
		int opcion = menu();

		if(opcion == 1){
			int eleccion;
			do {
				cout<<"Que clase desea agregar?"<<endl;
				cout<<"1. Aprendiz"<<endl;
				cout<<"2. Guerrero"<<endl;
				cout<<"3. Mago"<<endl;
				cout<<"4. Alquimista"<<endl;
				cout<<"5. DragonBorn"<<endl;
				cin>>eleccion;
			} while (eleccion < 1 || eleccion > 5);
			cout<<"Ingrese el nombre del luchador"<<endl;
			string nombreL;
			cin>>nombreL;
			Luchador* lucha;
			switch(eleccion){
				case 1:
					lucha = new Aprendiz(nombreL);
					lista.insert(lucha);
					break;
				case 2:
					lucha = new Guerrero(nombreL);
					lista.insert(lucha);
					break;
				case 3:
					lucha = new Mago(nombreL);
					lista.insert(lucha);
					break;
				case 4:
					lucha = new Alquimista(nombreL);
					lista.insert(lucha);
					break;
				case 5:
					lucha = new DragonBorn(nombreL);
					lista.insert(lucha);
					break;
			}
			cout<<endl;
		}else if(opcion == 2){
			if(lista.size() != 0){
				cout<<"LUCHADORES:"<<endl;
				int tam = lista.size();
				for(int i = 1; i <= tam; i++) {
					cout<<i<<". "<<lista.get(tam,i)->getNombre()<<endl;
				}
				cout<<endl;
			}else{
				cout<<"No hay nadie :3"<<endl;
			}
		}else if(opcion == 3){

			cout<<"La batalla iniciará!! -(o.o)-"<<endl;
			cout<<"------------------------------"<<endl;
			cout<<endl;
			int tam = lista.size();
			int primerJ;
			int segundoJ;
			cout<<"Ingrese la posicion del primer luchador: "<<endl;
			cin>>primerJ;
			while(primerJ<1 || primerJ > tam){
				cout<<"Posicion incorrecta, ingrese de nuevo: ";
				cin>>primerJ;
			}
			cout<<endl;
			cout<<"Ingrese la posicion del segundo luchador: "<<endl;
			cin>>segundoJ;
			while(segundoJ<1 || segundoJ > tam){
				cout<<"Posicion incorrecta, ingrese de nuevo: ";
				cin>>primerJ;
			}
			
			int tamano = lista.size();
			bool terminar = true;
			int gana1 = 0;
			int gana2 = 0;
			int jugada = 1;
			int defaultLife1 = lista.get(tam,primerJ)->getHp();
			int defaultLife2 = lista.get(tam,segundoJ)->getHp();

			do {
				cout<<endl;
				cout<<"-------------------------"<<endl;
				cout<<"Vida del jugador1: "<<lista.get(tam,primerJ)->getHp()<<endl;
				cout<<"Vida del jugador2: "<<lista.get(tam,segundoJ)->getHp()<<endl;
				cout<<"-------------------------"<<endl;
				if(jugada == 1){
					cout<<"Turno del Luchador 1"<<endl;
					cout<<"1. Ataque mágico"<<endl;
					cout<<"2. Ataque físico"<<endl;
					cout<<"3. Defensa"<<endl;
					cout<<"4. Habilidad"<<endl;
					int primerTurno;
					cin>>primerTurno;
					while(primerTurno <= 0 || primerTurno > 4){
						cout<<"Opcion incorrecta, ingrese de nuevo"<<endl;
						cin>>primerTurno;
					}
					
					if(primerTurno == 1){
						if(lista.get(tam,primerJ)->ataqueMagico() != 0){
							int ataque = lista.get(tam,primerJ)->ataqueMagico();
							if(lista.get(tam,segundoJ)->getdmag() == 'v'){
								ataque -= ataque*(lista.get(tam,segundoJ)->getdefensaM());
							}
							int vida = lista.get(tam,segundoJ)->getHp();
							int nuevaVida = vida - ataque;
							lista.get(tam,segundoJ)->setHp(nuevaVida);
							lista.get(tam,segundoJ)->setdmag('f');
							lista.get(tam,segundoJ)->setdfis('f');
							jugada = 2;	
						}else{
							cout<<"No tene ataque magico, pruebe de nuevo"<<endl;
						}
					}else if(primerTurno == 2){
						if(lista.get(tam,primerJ)->ataqueFisico() != 0){
							int ataque = lista.get(tam,primerJ)->ataqueFisico();
							if(lista.get(tam,segundoJ)->getdfis() == 'v'){
								ataque -= ataque*(lista.get(tam,segundoJ)->getdefensaF());
							}
							int vida = lista.get(tam,segundoJ)->getHp();
							int nuevaVida = vida - ataque;
							lista.get(tam,segundoJ)->setHp(nuevaVida);
							lista.get(tam,segundoJ)->setdmag('f');
							lista.get(tam,segundoJ)->setdfis('f');
							jugada = 2;
						}else{
							cout<<"No tiene ataque fisico, pruebe de nuevo"<<endl;
						}
					}else if(primerTurno == 3){
						lista.get(tam,primerJ)->defensa();
						cout<<"La defensa del jugador 1 se ha activado"<<endl;
					}else if(primerTurno == 4){

					}
				//turno 2
				}else if(jugada == 2){
					cout<<"Turno del luchador 2"<<endl;
					cout<<"1. Ataque mágico"<<endl;
					cout<<"2. Atque físico"<<endl;
					cout<<"3. Defensa"<<endl;
					cout<<"4. Habilidad"<<endl;
					int segundoTurno;
					cin>>segundoTurno;
					while(segundoTurno <= 0 || segundoTurno > 4){
						cout<<"Opcion incorrecta, ingrese de nuevo"<<endl;
						cin>>segundoTurno;
					}

					if(segundoTurno == 1){
						if(lista.get(tam,segundoJ)->ataqueMagico() != 0){
							int ataque = lista.get(tam,segundoJ)->ataqueMagico();
							if(lista.get(tam,primerJ)->getdmag() == 'v'){
								ataque -= ataque*(lista.get(tam,primerJ)->getdefensaM());
							}
							int vida = lista.get(tam,primerJ)->getHp();
							int nuevaVida = vida - ataque;
							lista.get(tam,primerJ)->setHp(nuevaVida);
							lista.get(tam,primerJ)->setdmag('f');
							lista.get(tam,primerJ)->setdfis('f');
							jugada = 1;

						}else{
							cout<<"No tiene ataque magico, pruebe de nuevo"<<endl;
						}
					}else if(segundoTurno == 2){
						if(lista.get(tam,segundoJ)->ataqueFisico() != 0){
							int ataque = lista.get(tam,segundoJ)->ataqueFisico();
							if(lista.get(tam,primerJ)->getdfis() == 'v'){
								ataque -= ataque*(lista.get(tam,primerJ)->getdefensaF());
							}
							int vida = lista.get(tam,primerJ)->getHp();
							int nuevaVida = vida - ataque;
							lista.get(tam,primerJ)->setHp(nuevaVida);
							lista.get(tam,primerJ)->setdmag('f');
							lista.get(tam,primerJ)->setdfis('f');
							jugada = 1;
						}else{
							cout<<"No tiene ataque fisico"<<endl;
						}
					}else if(segundoTurno == 3){
						lista.get(tam,segundoJ)->defensa();
					}else if(segundoTurno == 4){

					}
				}
				if(lista.get(tam,primerJ)->getHp() <= 0){
					terminar = false;
					gana1 = 1;
				}
				if(lista.get(tam,segundoJ)->getHp() <= 0){
					terminar = false;
					gana2 = 0;
				}
			} while (terminar);

			if(gana1 == 1){
				cout<<"Ha ganado el jugador 1"<<endl;
				int exp = lista.get(tam,primerJ)->getXP()+lista.get(tam,primerJ)->getXPE();
				lista.get(tam,primerJ)->setXP(exp);
			}else if(gana2 == 2){
				cout<<"Ha ganado el jugador 2"<<endl;
				int exp = lista.get(tam,segundoJ)->getXP()+lista.get(tam,segundoJ)->getXPE();
				lista.get(tam,primerJ)->setXPE(exp);
			}

			lista.get(tam,primerJ)->setHp(defaultLife1);
			lista.get(tam,segundoJ)->setHp(defaultLife2);
			cout<<endl;

		//fin del juego

		}else if(opcion == 5){
			cout<<"Gracias :("<<endl;
			salir = false;
		}else if(opcion == 4){
			int tam = lista.size();
			cout<<"Ingrese la posicion que desea eliminar: "<<endl;
			int pos;
			cin>>pos;
			while(pos<=0 || pos > tam){
				cout<<"Posicion incorrecta, ingrese de nuevo"<<endl;
				cin>>pos;
			}
			lista.remove(tam,pos);
			cout<<"Luchador eliminado!!"<<endl;
		}
		
	} while (salir);

	return 0;
}

int menu(){
	cout<<"<<<   MENU   >>>"<<endl;
	cout<<"1. Agregar"<<endl;
	cout<<"2. Listar"<<endl;
	cout<<"3. Simular"<<endl;
	cout<<"4. Eliminar"<<endl<<"5. Salir"<<endl<<endl;
	int opcion;
	cin>>opcion;
	return opcion;
}
