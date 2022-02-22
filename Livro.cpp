#include "Livro.h"

Livro::Livro()
{
}

Livro::~Livro()
{
}

void Livro :: imprimi(){
	
	cout << "\n------------------------------------LIVROS------------------------------------\n";
	cout << "\nDADOS SOBRE LIVROS!";
	
	Tipo :: imprimi();
	
}

