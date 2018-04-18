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
int string::max_size(){
	return taillemax;
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

/*
* Le string prend la valur du c-string
*/
string& string::operator=(const char* s){
	int n = 0;
    while (s[n] != '\0'){
		n++;
	}
	int length = n;
	delete[] tableau_;
	tableau_   = new char[length];
    for (int j=0; j < length; j++){
        tableau_[j] = s[j];
	}
	return *this;
}

/*
string& string::operator+(const string& rhs){
	int len = size_ + rhs.size();
    char* str = new char[len];

    for (int j=0; j < size_; j++)
        str[j] = tableau_[j];

    for (unsigned i=0; i < rhs.size(); i++)
        str[size_+i] = rhs[i];

    delete[] tableau_;
    size_ = len;
    tableau_   = str;
	capacity_ = len+1;
	return *this;
}
*/
