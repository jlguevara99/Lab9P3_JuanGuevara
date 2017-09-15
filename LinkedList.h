#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Luchador.h"
using namespace std;

class LinkedList{
	struct Node {
		Luchador* objeto;
		Node *posicion;
	};

	public:
		LinkedList();
		void insert(Luchador*);
		//int sacar();
	private:
		Node *head;
};



#endif
