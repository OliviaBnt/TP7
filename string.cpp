#include "string.h"

using namespace std;

String::String(char c){
	this->tableau_=(char*) malloc (11);
	this->tableau_[0]=c;
	this->tableau_[1]='\0';
	this->size_=1;
	this->capacity_=10;
}

/*
* Destructeur
*/
String::~String(){
	delete[] tableau_;
}

void String::printtest(){
	unsigned int i = 0;
	for (i;i<size_;i++){
		printf("%c ",tableau_[i]);
		printf("\n");
	}
}

/*
 * * Constructeur de copie*/
String::String(const String &str) : tableau_(0), capacity_(str.capacity_), size_(str.size_)
{
    tableau_ = new char[capacity_+1];
    for(int i(0); i < size_+1; i++){
        tableau_[i] = str.tableau_[i];
    }
}

//c_str()
char* String::c_str(void) const { return tableau_; } 

//size()
unsigned int String::size(void) const { return size_; }

//clear()
void String::clear(){
	tableau_[0]='\0';
	size_=0;
}

/*
* Methode de debuggage
*
void String::debug(void){
    cout << "String : " << endl << "Size : " << size_ << endl << "Capacity : " << capacity_ << endl << "String : \"" << tableau_ << "\"" << endl;
}
*/

/*
* Renvoie la taille du String en nombre de caratères
*/
unsigned int String::length() const {return size_;}

/*
* Renvoie la taille maximum qu'un String peut atteindre
*/
unsigned int String::max_size() const {return MAX_STRING_SIZE;}

/*
* Renvoie la taille de l'espace de stockage alloué pour le String
* en bytes
*/
unsigned int String::capacity() const{return capacity_;}

/*
* Renvoie true si le String est vide
* (c'est a dire si sa taille est nulle)
*/
bool String::empty() const{ return !size_;}

/*
* Cette fonction verifie si un changement de la capacite est nécessaire
* en fonction de ce qui est souhaité
*/
void String::reserve(unsigned int reserve_size){
    if(reserve_size <= capacity_)
        cout << "[WARNING] Requested capacity already allocated!" << endl;
    else if(reserve_size > MAX_STRING_SIZE)
        cout << "[ERROR] Cannot allocate requested size, max capacity is " << MAX_STRING_SIZE << endl;
    else{
        char* tmpArray = tableau_;
        capacity_ = reserve_size;
        tableau_ = new char[capacity_+1];
        for(unsigned int i(0); i < size_+1; i++){
            tableau_[i] = tmpArray[i];
        }
        delete[] tmpArray;
    }
}


void String::resize(unsigned int new_size){
    if(new_size >= capacity_)
        reserve(new_size);
    else{
        char* tmpArray = tableau_;
        capacity_ = new_size;
        size_ = capacity_;
        tableau_ = new char[capacity_+1];
        for(int i(0); i < size_; i++){
            tableau_[i] = tmpArray[i];
        }
        tableau_[capacity_] = '\0';
        delete[] tmpArray;
    }
}


/*
* Le String prend la valeur du c-String
*/
String& String::operator=(const char *c_str){
    unsigned int n = 0;
    while(c_str[n] != '\0')
        n++;
    if(n > MAX_STRING_SIZE){
        n = MAX_STRING_SIZE;
    }
    if(n > capacity_){
        reserve(n);
    }
    size_ = n;
    tableau_ = new char[capacity_+1];
    for(unsigned int i(0); i < size_+1; i++){
        tableau_[i] = c_str[i];
    }
    return *this;
}



String& String::operator=(char c){
    size_ = 1;
    if(capacity_ < 1)
        reserve(1);
    tableau_[0] = c;
    tableau_[1] = '\0';
    return *this;
}


String& String::operator+(char* c_str){
    int other_size = 0;
    while(c_str[other_size] != '\0'){other_size ++;}

    if(size_ + other_size > MAX_STRING_SIZE){
        cout << "[ERROR] Max capacity overflow!" << endl;
        return *this;
    }

    if(size_ + other_size > capacity_){
        reserve(size_+other_size);
    }
    char* tmpArray = tableau_;
    tableau_ = new char[capacity_+1];
    for(unsigned int i(0); i < size_; i++){
        tableau_[i] = tmpArray[i];
    }
    for(unsigned int i(0); i < other_size; i++){
        tableau_[size_+i] = c_str[i];
    }
    size_ += other_size;
    tableau_[size_] = '\0';
    delete[] tmpArray;
    return *this;
}



/*
String& String::operator+(const String& other){
    if(tableau_ + other.size() > MAX_STRING_SIZE){
        cout << "[ERROR] Max capacity overflow!" << endl;
        return *this;
    }

    if(tableau_ + other.size() > capacity_){
        reserve(tableau_+other.size());
    }
    char* tmpArray = tableau_;
    tableau_ = new char[capacity_+1];
    for(unsigned int i(0); i < tableau_; i++){
        tableau_[i] = tmpArray[i];
    }
    for(unsigned int i(0); i < other.size(); i++){
        tableau_[tableau_+i] = other.tableau_[i];
    }
    tableau_ += other.size();
    tableau_[tableau_] = '\0';
    delete[] tmpArray;
    return *this;
}
*/
