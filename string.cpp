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
	
int string::capacity(){
  return capacity_;
}
