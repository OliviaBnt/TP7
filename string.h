class string{
	
	public:
		string(char c);
		void printtest();
		~string();
		//Lea
		//string::string(const string& str);
		//int size() const
		//Nathan
		//string::string(s-string?);
		int length();
		int max_size();
		//void resize (int n);
		//string::=(char);
		//string::+(char*);
		//Olivia
		int capacity();
	  	bool empty();
	  	void reserve(int n);
		string& operator=(const char* s);
		string& operator+ (const string& rhs);

		
		
	
	private:
	  /*
	  * Capacite maximale qu'un string peut atteindre
	  */
		const int taillemax = 50;
		
		/*
		* Longueur de la chaine de char
		*/
		int size_;
		
		/*
		* Taille du tableau contenant le string
		*/
		int capacity_;
		
		/*
		* Tableau contenant le string
		* (tableau de char)
		*/
		char* tableau_;
	
	
};
