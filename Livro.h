#ifndef LIVRO_H
#define LIVRO_H
#include <string>
#include <iostream>
#include "Tipo.h"

using namespace std;

class Livro : public Tipo
{
	public:
		Livro();	
		~Livro();
		
	void imprimi();	
		
		
};

#endif
