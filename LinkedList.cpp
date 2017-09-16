#include "LinkedList.h"

LinkedList::LinkedList(){
	head = NULL;
}

void LinkedList::insert(Luchador* val){
	Node *node = new Node();
	node->objeto = val;
	node->posicion = head;

	head = node;
}

int LinkedList::size(){
	bool salir = true;
	int casillas = 0;
	vector<Luchador*> temporal;
	while(salir){
		Node *node = head;
		Luchador* valor = node->objeto;
		temporal.push_back(valor);
		head = head->posicion;
		if(head == NULL){
			salir = false;
		}
		casillas++;
	}
	int valor = temporal.size()-1;
	for(int i = valor; i >= 0; i--) {
		Node *nod = new Node();
		nod->objeto = temporal.at(i);
		nod->posicion = head;
		head = nod;
	}
	return casillas;
}

Luchador* LinkedList::get(int tam, int eleccion){
	int cont = 0;
	Luchador* valor;
	vector<Luchador*> temporal;
	//cout<<tam-eleccion<<endl;
	while(cont <= (tam-eleccion)){
		Node *node = head;
		valor = node->objeto;
		temporal.push_back(valor);
		head = head->posicion;
		cont++;
	}
	//cout<<"si"<<endl;
	int val = temporal.size()-1;
	for(int i = val; i >= 0; i--) {
		Node *nod = new Node();
		nod->objeto = temporal.at(i);
		nod->posicion = head;
		head = nod;
	}
	return valor; 
}

void LinkedList::remove(int tam,int eleccion){
	int cont = 0;
	Luchador* valor;
	vector<Luchador*> temporal;

	while(cont <= (tam-eleccion)){
		Node *node = head;
		valor = node->objeto;
		temporal.push_back(valor);
		head = head->posicion;
		cont++;
	}

	int val = temporal.size() -1;
	for(int i = val; i >= 0; i--) {
		Node *nod = new Node();
		if(val == i){
			delete nod;
		}else{
			nod->objeto = temporal.at(i);
			nod->posicion = head;
			head = nod;
		}
	}
}
/*int LinkedList::sacar(){
	Node *n = head;
	Luchador* valor = n->x;

	head = head->next;
	delete n;
	return valor->getBatallas();

}*/
