class string{
	
	public:
		string(char c);
		void printtest();

		//Lea
		//string::string(const string& str);
		//int size() const
		//Nathan
		//string::string(s-string?);
		//int string::length();
		//int string::max_size();
		//void resize (int n);
		//string::=(char*);
		//string::+(string);
		//Olivia
		//~string();
	  	//int capacity();
	  	//bool empty();
	  	//void reserve(int n);

		
		
	
	private:
		const int taillemax = 50;
		int size_;
		int capacity_;
		char* tableau_;
	
	
};
