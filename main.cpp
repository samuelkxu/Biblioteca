#include <iostream>
#include "Tipo.h"
#include <string>
#include <iostream>
#include "Livro.h"
#include "Periodicos.h"
#include "Trabalhos.h"
#include "Relatorios.h"
#include "Midias.h"
#include "Cartazes.h"
#include "Mapas.h"
#include "Usuarios.h"


using namespace std;

void inserTipo(Tipo *Estilo);
void inserUsuarios(Usuarios *Estilo);

void inserLivro(Livro *Estilo);
void inserPeriodicos(Periodicos *Estilo);
void inserTrabalhos(Trabalhos *Estilo);
void inserRelatorios(Relatorios*Estilo);
void inserMidias(Midias *Estilo);
void inserCartazes(Cartazes *Estilo);
void inserMapas(Mapas *Estilo);

int main(int argc, char** argv) {
	
	Tipo*Estilo[10];
	
	Tipo*User[3];
	
	int usuario;
	int op,op2,op3, i = 0;
	int fim;
	int pos;
	int inser;
	int encontra[10];
	
	int cont = 0;
	
	string pesq;
	string login;
	string password;
	char passaAux[4];
	
	cout << "Deseja logar com uma conta ADM = 1 ou Usuario = 2?\n";
	cin >> usuario;
	cin.clear();
	fflush(stdin);
	
	
	if(usuario == 1){
		
		cout << "--------------------ADM--------------------\n";
		cout << "\nLogin:";
		getline(cin,login);
		cin.clear();
		fflush(stdin);
		
		cout << "\nPassword:";
		getline(cin,password);
		cin.clear();
		fflush(stdin);
		
		if(login == "Samuelkxu" && password == "8080"){
			
			cout << "\nQuantos obras voce deseja adicionar?\n";
			cin >> pos;
			cin.clear();
			fflush(stdin);
			
			do{
				cout << "Onde voce deseja adicionar uma obra?\n1-Livro\n2-Periodicos\n3-TBC\n4-Relatorios\n5-Midias\n6-Cartazes\n7-Mapas\n";
				cin >> op;
				cin.clear();
				fflush(stdin);
				
				switch (op){
				
				case 0:{
					
					break;
				}
				
				case 1:{
					
					cout << "\n--------------------Livro--------------------\n";
					Estilo[i] = new Livro;
					inserLivro(dynamic_cast<Livro*>(Estilo[i]));
					
					break;
				}
				
				case 2:{
					
					cout << "\n--------------------Periodicos--------------------\n";
					Estilo[i] = new Periodicos;
					inserPeriodicos(dynamic_cast<Periodicos*>(Estilo[i]));
					break;
				}
				
				case 3:{
					
					cout << "\n--------------------Trabalho de conclusao--------------------\n";
					Estilo[i] = new Trabalhos;
					inserTrabalhos(dynamic_cast<Trabalhos*>(Estilo[i]));
					break;
				}
				
				case 4:{
					
					cout << "\n--------------------Relatorios--------------------\n";
					Estilo[i] = new Relatorios;
					inserRelatorios(dynamic_cast<Relatorios*>(Estilo[i]));
					break;
				}
				
				case 5:{
					
					cout << "\n--------------------Midias--------------------\n";
					Estilo[i] = new Midias;
					inserMidias(dynamic_cast<Midias*>(Estilo[i]));
					break;
				}
				
				case 6:{
					
					cout << "\n--------------------Cartazes--------------------\n";
					Estilo[i] = new Cartazes;
					inserCartazes(dynamic_cast<Cartazes*>(Estilo[i]));
					break;
				}
				
				case 7:{
					
					cout << "\n--------------------Mapas--------------------\n";
					Estilo[i] = new Mapas;
					inserMapas(dynamic_cast<Mapas*>(Estilo[i]));
					break;
				}
				}
				i++;
				
			}while(i<pos);
		}
	}
	
			
			User[0] = new Usuarios;
			inserUsuarios(dynamic_cast<Usuarios*>(User[0]));

			do{
				
				cout << "\nDigite como deseja pesquisar!\n1-Autor\n2-Titulo\n3-Edicao\n4-Cidade\n5-Ano\n6-Pagina\n7-ISBN\n8-Assunto\n9-Palavras chave 1\n10-Palavra chave 2\n11-CDU\n";
			cin >> op2;
			cin.clear();
			fflush(stdin);
			
			switch (op2){
				
				case 1:{
					
					cout << "\nDigite as informacoes!\n";
					getline(cin,pesq);
					cin.clear();
					fflush(stdin);
					
					for(i=0;i<pos;i++){
						
						if(Estilo[i]->getAutor() == pesq){
							
							Estilo[i]->imprimi();
							
							cout << "\nDeseja pegar emprestado?\n 1-Sim 2-Nao\n";
							cin >> inser;
							cin.clear();
							fflush(stdin);
							
							if(inser == 1){
								
								User[i] = Estilo[i];
								cout << "\n------------------------------------Emprestimo------------------------------------\n";
								User[i]->imprimi();
								encontra[cont] = i;
								cont++;
							}
					
							
							cout << "\nDeseja finalizar a pesquisa?1-Sim 2-Nao\n";
							cin >> fim;
							cin.clear();
							fflush(stdin);
						}
					}
					
					break;
				}
				
				case 2:{
					
					cout << "\nDigite as informacoes!\n";
					getline(cin,pesq);
					cin.clear();
					fflush(stdin);
					
					for(i=0;i<pos;i++){
						
						if(Estilo[i]->getTitulo() == pesq){
							
							Estilo[i]->imprimi();
							
							cout << "\nDeseja pegar emprestado?\n 1-Sim 2-Nao\n";
							cin >> inser;
							cin.clear();
							fflush(stdin);
							
							if(inser == 1){
								
								User[i] = Estilo[i];
								cout << "\n------------------------------------Emprestimo------------------------------------\n";
								User[i]->imprimi();
								encontra[cont] = i;
								cont++;
							}
				
							cout << "\nDeseja finalizar a pesquisa?1-Sim 2-Nao\n";
							cin >> fim;
							cin.clear();
							fflush(stdin);
						}
						
					}
					
					break;
				}
				
				case 3:{
					
					cout << "\nDigite as informacoes!\n";
					getline(cin,pesq);
					cin.clear();
					fflush(stdin);
					
					for(i=0;i<pos;i++){
						
						if(Estilo[i]->getEdicao() == pesq){
							
							Estilo[i]->imprimi();
							
							cout << "\nDeseja pegar emprestado?\n 1-Sim 2-Nao\n";
							cin >> inser;
							cin.clear();
							fflush(stdin);
							
							if(inser == 1){
								
								User[i] = Estilo[i];
								cout << "\n------------------------------------Emprestimo------------------------------------\n";
								User[i]->imprimi();
								encontra[cont] = i;
								cont++;
							}

							
							cout << "\nDeseja finalizar a pesquisa?1-Sim 2-Nao\n";
							cin >> fim;
							cin.clear();
							fflush(stdin);
						}
					}
					
					break;
				}
				
				case 4:{
					
					cout << "\nDigite as informacoes!\n";
					getline(cin,pesq);
					cin.clear();
					fflush(stdin);
					
					for(i=0;i<pos;i++){
						
						if(Estilo[i]->getCidade() == pesq){
							
							Estilo[i]->imprimi();
							
							cout << "\nDeseja pegar emprestado?\n 1-Sim 2-Nao\n";
							cin >> inser;
							cin.clear();
							fflush(stdin);
							
							if(inser == 1){
								
								User[i] = Estilo[i];
								cout << "\n------------------------------------Emprestimo------------------------------------\n";
								User[i]->imprimi();
								encontra[cont] = i;
								cont++;
							}

							
							cout << "\nDeseja finalizar a pesquisa?1-Sim 2-Nao\n";
							cin >> fim;
							cin.clear();
							fflush(stdin);
						}
					}
					
					break;
				}
				
				case 5:{
					
					cout << "\nDigite as informacoes!\n";
					getline(cin,pesq);
					cin.clear();
					fflush(stdin);
					
					for(i=0;i<pos;i++){
						
						if(Estilo[i]->getAno() == pesq){
							
							Estilo[i]->imprimi();
							
							cout << "\nDeseja pegar emprestado?\n 1-Sim 2-Nao\n";
							cin >> inser;
							cin.clear();
							fflush(stdin);
							
							if(inser == 1){
								
								User[i] = Estilo[i];
								cout << "\n------------------------------------Emprestimo------------------------------------\n";
								User[i]->imprimi();
								encontra[cont] = i;
								cont++;
							}

							
							cout << "\nDeseja finalizar a pesquisa?1-Sim 2-Nao\n";
							cin >> fim;
							cin.clear();
							fflush(stdin);
						}
					}
					
					break;
				}
				
				case 6:{
					
					cout << "\nDigite as informacoes!\n";
					getline(cin,pesq);
					cin.clear();
					fflush(stdin);
					
					for(i=0;i<pos;i++){
						
						if(Estilo[i]->getPag() == pesq){
							
							Estilo[i]->imprimi();
							
							cout << "\nDeseja pegar emprestado?\n 1-Sim 2-Nao\n";
							cin >> inser;
							cin.clear();
							fflush(stdin);
							
							if(inser == 1){
								
								User[i] = Estilo[i];
								cout << "\n------------------------------------Emprestimo------------------------------------\n";
								User[i]->imprimi();
								encontra[cont] = i;
								cont++;
							}

							
							cout << "\nDeseja finalizar a pesquisa?1-Sim 2-Nao\n";
							cin >> fim;
							cin.clear();
							fflush(stdin);
						}
					}
					
					break;
				}
				
				case 7:{
					
					cout << "\nDigite as informacoes!\n";
					getline(cin,pesq);
					cin.clear();
					fflush(stdin);
					
					for(i=0;i<pos;i++){
						
						if(Estilo[i]->getIsbn() == pesq){
							
							Estilo[i]->imprimi();
							
							cout << "\nDeseja pegar emprestado?\n 1-Sim 2-Nao\n";
							cin >> inser;
							cin.clear();
							fflush(stdin);
							
							if(inser == 1){
								
								User[i] = Estilo[i];
								cout << "\n------------------------------------Emprestimo------------------------------------\n";
								User[i]->imprimi();
								encontra[cont] = i;
								cont++;
							}

							
							cout << "\nDeseja finalizar a pesquisa?1-Sim 2-Nao\n";
							cin >> fim;
							cin.clear();
							fflush(stdin);
						}
					}
					
					break;
				}
				
				case 8:{
					
					cout << "\nDigite as informacoes!\n";
					getline(cin,pesq);
					cin.clear();
					fflush(stdin);
					
					for(i=0;i<pos;i++){
						
						if(Estilo[i]->getAss() == pesq){
							
							Estilo[i]->imprimi();
							
							cout << "\nDeseja pegar emprestado?\n 1-Sim 2-Nao\n";
							cin >> inser;
							cin.clear();
							fflush(stdin);
							
							if(inser == 1){
								
								User[i] = Estilo[i];
								cout << "\n------------------------------------Emprestimo------------------------------------\n";
								User[i]->imprimi();
								encontra[cont] = i;
								cont++;
							}

							
							cout << "\nDeseja finalizar a pesquisa?1-Sim 2-Nao\n";
							cin >> fim;
							cin.clear();
							fflush(stdin);
						}
					}
					
					break;
				}
				
				case 9:{
					
					cout << "\nDigite as informacoes!\n";
					getline(cin,pesq);
					cin.clear();
					fflush(stdin);
					
					for(i=0;i<pos;i++){
						
						if(Estilo[i]->getPalchave() == pesq){
							
							Estilo[i]->imprimi();
							
							cout << "\nDeseja pegar emprestado?\n 1-Sim 2-Nao\n";
							cin >> inser;
							cin.clear();
							fflush(stdin);
							
							if(inser == 1){
								
								User[i] = Estilo[i];
								cout << "\n------------------------------------Emprestimo------------------------------------\n";
								User[i]->imprimi();
								encontra[cont] = i;
								cont++;
							}
							
							
							cout << "\nDeseja finalizar a pesquisa?1-Sim 2-Nao\n";
							cin >> fim;
							cin.clear();
							fflush(stdin);
						}
					}
					
					break;
				}
				
				case 10:{
				
					cout << "\nDigite as informacoes!\n";
					getline(cin,pesq);
					cin.clear();
					fflush(stdin);
					
					for(i=0;i<pos;i++){
						
						if(Estilo[i]->getPalchave2() == pesq){
							
							Estilo[i]->imprimi();
							
							cout << "\nDeseja pegar emprestado?\n 1-Sim 2-Nao\n";
							cin >> inser;
							cin.clear();
							fflush(stdin);
							
							if(inser == 1){
								
								User[i] = Estilo[i];
								cout << "\n------------------------------------Emprestimo------------------------------------\n";
								User[i]->imprimi();
								encontra[cont] = i;
								cont++;
							}

							
							cout << "\nDeseja finalizar a pesquisa?1-Sim 2-Nao\n";
							cin >> fim;
							cin.clear();
							fflush(stdin);
						}
					}
					
					break;
				}
				
				case 11:{
					
					cout << "\nDigite as informacoes!\n";
					getline(cin,pesq);
					cin.clear();
					fflush(stdin);
					
					for(i=0;i<pos;i++){
						
						if(Estilo[i]->getCdu() == pesq){
							
							Estilo[i]->imprimi();
							
							cout << "\nDeseja pegar emprestado?\n 1-Sim 2-Nao\n";
							cin >> inser;
							cin.clear();
							fflush(stdin);
							
							if(inser == 1){
								
								User[i] = Estilo[i];
								cout << "\n------------------------------------Emprestimo------------------------------------\n";
								User[i]->imprimi();
								encontra[cont] = i;
								cont++;
							}
						
							
							cout << "\nDeseja finalizar a pesquisa?1-Sim 2-Nao\n";
							cin >> fim;
							cin.clear();
							fflush(stdin);
						}
					}
					break;
				}
			}
				
			}while(fim != 1);
			
			
			
			cout << cont;
		
	
	
	
	for(i=0;i<pos;i++){
		
		cout << "\n\n\n\n\n\n";
		
		if(encontra[i-1] == i ){
			
			cout << "\n------------------------------------------------Emprestado!------------------------------------------------";
			Estilo[i]->imprimi();
		}
		
		else{
			
			Estilo[i]->imprimi();
		}
		
	}
	
	
	
		
	return 0;
}


void inserTipo(Tipo *Estilo){
	
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
		
	cout << "\nDigite o autor:\n";
	getline(cin,autor);
	cin.clear();
	fflush(stdin);
	Estilo->setAutor(autor);
	
	cout << "\nDigite o titulo:\n";
	getline(cin,titulo);
	cin.clear();
	fflush(stdin);
	Estilo->setTitulo(titulo);
	
	cout << "\nDigite o cidade:\n";
	getline(cin,cidade);
	cin.clear();
	fflush(stdin);
	Estilo->setCidade(cidade);
	
	
	cout << "\nDigite o editora:\n";
	getline(cin,edicao);
	cin.clear();
	fflush(stdin);
	Estilo->setEdicao(edicao);
	
	cout << "\nDigite o ano:\n";
	getline(cin,ano);
	cin.clear();
	fflush(stdin);
	Estilo->setAno(ano);
	
	cout << "\nDigite a pagina:\n";
	getline(cin,pag);
	cin.clear();
	fflush(stdin);
	Estilo->setPag(pag);
	
	cout << "\nDigite o isbn:\n";
	getline(cin,isbn);
	cin.clear();
	fflush(stdin);
	Estilo->setIsbn(isbn);
	
	cout << "\nDigite o assunto:\n";
	getline(cin,ass);
	cin.clear();
	fflush(stdin);
	Estilo->setAss(ass);
	
	cout << "\nDigite a palavra chave:\n";
	getline(cin,palchave);
	cin.clear();
	fflush(stdin);
	Estilo->setPalchave(palchave);
	
	cout << "\nDigite a palavra chave 2:\n";
	getline(cin,palchave2);
	cin.clear();
	fflush(stdin);
	Estilo->setPalchave2(palchave2);
	
	cout << "\nDigite o CDU\n";
	getline(cin,cdu);
	cin.clear();
	fflush(stdin);
	Estilo->setCdu(cdu);
	
}

void inserUsuarios(Usuarios *Estilo){
	
	string user;
	string password;
	
	cout << "\nLogin:";
	getline(cin,user);
	cin.clear();
	fflush(stdin);
	Estilo->setUser(user);
	
	cout << "\nSenha:";
	getline(cin,password);
	cin.clear();
	fflush(stdin);
	Estilo->setPassword(password);
	
}

void inserLivro(Livro *Estilo){
	
	inserTipo(Estilo);
	
}

void inserPeriodicos(Periodicos *Estilo){
	
	inserTipo(Estilo);
}

void inserTrabalhos(Trabalhos *Estilo){
	
	inserTipo(Estilo);
}

void inserRelatorios(Relatorios*Estilo){
	
	inserTipo(Estilo);
}

void inserMidias(Midias *Estilo){
	
	inserTipo(Estilo);
}

void inserCartazes(Cartazes *Estilo){
	
	inserTipo(Estilo);
}

void inserMapas(Mapas *Estilo){
	
	inserTipo(Estilo);
}


