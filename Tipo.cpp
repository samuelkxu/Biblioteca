#include "Tipo.h"

Tipo::Tipo()
{
}

Tipo::Tipo(string autor,string titulo,string edicao,string cidade,string ano,string pag,string isbn,string ass,string palchave,string palchave2,string cdu){
	
	setAutor(autor);
	setTitulo(titulo);
	setEdicao(edicao);
	setCidade(cidade);
	setAno(ano);
	setPag(ano);
	setIsbn(isbn);
	setAss(ass);
	setPalchave(palchave);
	setPalchave2(palchave2);
	setCdu(cdu);
}

Tipo::~Tipo()
{
}

string Tipo::getAutor(){
	
	return autor;
}

string Tipo::getTitulo(){
	
	return titulo;
}

string Tipo::getEdicao(){
	
	return edicao;
}

string Tipo::getCidade(){
	
	return cidade;
}

string Tipo::getAno(){
	
	return ano;
}

string Tipo::getPag(){
	
	return pag;
}

string Tipo::getIsbn(){
	
	return isbn;
}

string Tipo::getAss(){
	
	return ass;
}

string Tipo::getPalchave(){
	
	return palchave;
}

string Tipo::getPalchave2(){
	
	return palchave2;
}

string Tipo::getCdu(){
	
	return cdu;
}

void Tipo::setAutor(string autor){
	
	this->autor = autor;
}

void Tipo::setTitulo(string titulo){
	
	this->titulo = titulo;
}

void Tipo::setEdicao(string edicao){
	
	this->edicao = edicao;
}

void Tipo::setCidade(string cidade){
	
	this->cidade = cidade;
}

void Tipo::setAno(string ano){
	
	this->ano = ano;
}

void Tipo::setPag(string pag){
	
	this->pag = pag;
}

void Tipo::setIsbn(string isbn){
	
	this->isbn = isbn;
}

void Tipo::setAss(string ass){
	
	this->ass = ass;
}

void Tipo::setPalchave(string palchave){
	
	this->palchave = palchave;
}

void Tipo::setPalchave2(string palchave2){
	
	this->palchave2 = palchave2;
}

void Tipo::setCdu(string cdu){
	
	this->cdu = cdu;
}


void Tipo::imprimi(){
	
	cout << "\n\n" << autor << "\n";
	cout << titulo;
	cout << cidade << ":";
	cout << edicao << "-"; 
	cout << ano << "\n";
	cout << pag << "\n\n";
	cout << "ISBN:" << isbn << "\n\n";
	cout << "1. " << ass << " ";
	cout << "I." << palchave << " ";
	cout << "II. " << palchave2 << " ";
	cout << "III." << titulo << "\n\n						"; 
	cout << "CDU: " << cdu; 
}
