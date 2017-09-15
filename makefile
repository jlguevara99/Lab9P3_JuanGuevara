main:	main.o Luchador.o Mago.o DragonBorn.o Alquimista.o Guerrero.o Aprendiz.o LinkedList.o
	g++ main.o Luchador.o Mago.o DragonBorn.o Alquimista.o Guerrero.o Aprendiz.o LinkedList.o -o main

main.o:	main.cpp Luchador.o Mago.h DragonBorn.h Alquimista.h Guerrero.h Aprendiz.h LinkedList.h
	g++ -c main.cpp

Luchador.o:	Luchador.cpp Luchador.h
	g++ -c Luchador.cpp

Mago.o:	Mago.cpp Mago.h
	g++ -c Mago.cpp

DragonBorn.o:	DragonBorn.h DragonBorn.cpp
	g++ -c DragonBorn.cpp

Alquimista.o:	Alquimista.h Alquimista.cpp
	g++ -c Alquimista.cpp

Guerrero.o:	Guerrero.h Guerrero.cpp
	g++ -c Guerrero.cpp

Aprendiz.o:	Aprendiz.h Aprendiz.cpp
	g++ -c Aprendiz.cpp

LinkedList.o:	LinkedList.cpp LinkedList.h
	g++ -c LinkedList.cpp
