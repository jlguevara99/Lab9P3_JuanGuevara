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

/*int LinkedList::sacar(){
	Node *n = head;
	Luchador* valor = n->x;

	head = head->next;
	delete n;
	return valor->getBatallas();

}*/
