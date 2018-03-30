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
		printf("%c \n",tableau_[i]);
	}
}

int string::capacity(){
  return capacity_;
}

bool string::empty(){
  bool empty = false;
  if(size_ == 0){
    empty = true;
  }
  return empty;
}
