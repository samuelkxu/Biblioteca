#ifndef USUARIOS_H
#define USUARIOS_H
#include <string>
#include <iostream>

#include "Tipo.h"


using namespace std;

class Usuarios : public Tipo
{
	public:
		Usuarios();
		Usuarios(string user, string password);
		~Usuarios();
		
		
		void setUser(string user);
		void setPassword(string password);
		
		string getUser();
		string getPassword();
		
		
	private:
		
		string user;
		string password;
};

#endif
