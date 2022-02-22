#include "Usuarios.h"


Usuarios::Usuarios()
{
}

Usuarios::Usuarios(string user, string password){
	
	setUser(user);
	setPassword(password);	
}

Usuarios::~Usuarios()
{
}

void Usuarios :: setUser(string user){
	
	this->user = user;
}

void Usuarios :: setPassword(string password){
	
	this->password = password;
}

string Usuarios :: getUser(){
	
	return user;
}

string Usuarios :: getPassword(){
	
	return password;
}


