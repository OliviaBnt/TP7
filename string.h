#ifndef STRING_H
#define STRING_H

/*
* pas d'utilisation inutile de la memoire
* definit la taille maximum d'un String
* initialisée arbitrairement à 50 pour les tests
*/
#define MAX_STRING_SIZE 50

#include <iostream>

class String{
	
	public:
	/** Constructeurs */
    String(); /** Constructeur par défaut*/
	String (char c);
    String(char* c_str); /** Constructeur à partir d'une c_str*/
    String(const String &str); /** Constructeur de copie */

    void debug();
	void printtest();
	void clear();
    /**Destructeur*/
    ~String();

    /** Etudiant 1 */
    char* c_str() const;
    unsigned int size() const;
    String& operator=(const String &other);
    String& operator+(char c);

    /** Etudiant 2*/
    unsigned int length() const;
    unsigned int max_size() const;
    void resize(unsigned int new_size);
    String& operator=(char c);
    String& operator+(char* c_str);

    /** Etudiant 3*/
    unsigned int capacity() const;
    bool empty() const;
    void reserve(unsigned int reserve_size);
    String& operator=(const char* c_str);
    String& operator+(const String& other);

		
		
	
	private:		
	/*
	* Longueur de la chaine de char
	*/
	unsigned int size_;
		
	/*
	* Taille du tableau contenant le String
	*/
	unsigned int capacity_;
		
	/*
	* Tableau contenant le String
	* (tableau de char)
	*/
	char* tableau_;
	
	
};

#endif
