#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Luchador.h"
#include <vector>
using namespace std;

class LinkedList{
	struct Node {
		Luchador* objeto;
		Node *posicion;
	};

	public:
		LinkedList();
		void insert(Luchador*);
		int size();
		Luchador* get(int,int);
		void remove(int,int);
		//int sacar();
	private:
		Node *head;
};



#endif
