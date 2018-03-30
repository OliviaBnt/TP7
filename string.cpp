#include "string.h"
#include <stdio.h>      
#include <stdlib.h> 

string::string(char c){
	this->tableau_=(char*) malloc (11);
	this->tableau_[0]=c;
	this->tableau_[1]='\0';
	this->size_=1;
	this->capacity_=10;	
}

/*
* Destructeur
*/
string::~string(){
  delete[] tableau_;
}

void string::printtest(){
	int i = 0;
	for (i;i<size_;i++){
		printf("%c ",tableau_[i]);
		printf("\n");
	}
}
int string::length(){
	return size_;
}

/*
* Renvoie la taille de l'espace de stockage alloué pour le string
* en bytes
*/
int string::capacity(){
  return capacity_;
}

/*
* Retourne true si le string est vide 
* (c'est a dire si sa taille est nulle)
*/
bool string::empty(){
	bool empty = false;
	if(size_ == 0){
		empty = true;
	}
	return empty;
}

/*
* Cette fonction verifie si un changement de la capacite est nécessaire 
* en fonction de la taille n du string. La capacite augmente alors jusqu'a
* n+1 caracteres
*/
void string::reserve(int n){
	if(capacity_<= n){
		capacity_ = n+1;
	}
}
