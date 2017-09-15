#include "LinkedList.h"
#include "Luchador.h"
#include "Aprendiz.h"
#include "Mago.h"
#include "Guerrero.h"
#include "Alquimista.h"
#include "DragonBorn.h"
#include <iostream>

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
	
	cout<< "<<<	JUAN GUEVARA-LAB6 >>>"<<endl;
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
		}else if(opcion == 2){

		}else if(opcion == 3){

		}else if(opcion == 4){
			cout<<"Gracias :("<<endl;
			salir = false;
		}
		
	} while (salir);

	return 0;
}

int menu(){
	cout<<"<<<   MENU   >>>"<<endl;
	cout<<"1. Agregar"<<endl;
	cout<<"2. Listar"<<endl;
	cout<<"3. Simular"<<endl;
	cout<<"4. Salir"<<endl;
	int opcion;
	cin>>opcion;
	return opcion;
}
