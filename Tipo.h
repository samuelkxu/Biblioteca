#ifndef TIPO_H
#define TIPO_H

#include <string>
#include <iostream>
using namespace std;

class Tipo
{
	public:
		Tipo();
		Tipo(string autor,string titulo,string edicao,string cidade,string ano,string pag,string isbn,string ass,string palchave,string palchave2,string cdu);
		~Tipo();
		
		virtual void imprimi();
		
		string getAutor();
		string getTitulo();
		string getEdicao();
		string getCidade();
		string getAno();
		string getPag();
		string getIsbn();
		string getAss();
		string getPalchave();
		string getPalchave2();
		string getCdu();
		
		void setAutor(string autor);
		void setTitulo(string titulo);
		void setEdicao(string edicao);
		void setCidade(string cidade);
		void setAno(string ano);
		void setPag(string pag);
		void setIsbn(string isbn);
		void setAss(string ass);
		void setPalchave(string palchave);
		void setPalchave2(string palchave2);
		void setCdu(string cdu);
		
	private:
		
		string autor;
		string titulo;
		string edicao;
		string cidade;
		string ano;
		string pag;
		string isbn;
		string ass;
		string palchave;
		string palchave2;
		string cdu;
};

#endif
