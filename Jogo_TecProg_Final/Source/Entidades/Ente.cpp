#include "Entidades/Entidade.h"

Ente::Ente(int semente):id(semente + (id_contador++))
{
	pGG = Gerenciadores::Gerenciador_Grafico::getInstance();

	//operator++();

	//id = id_contador;
	pFigura = new sf::RectangleShape;

	std::cout<<id<<std::endl;
}

Ente::~Ente(){

	operator--();
	if(pFigura){

		delete pFigura;
	}
}

void Ente::Desenhar() { 
	pGG->getJanela()->draw(*pFigura); 
}

int Ente::getId() const {
	return id;
}

void Ente::operator--() {
	id_contador--;
}

int Ente::id_contador = 1;