class string{
	
	public:
		string(char c);
		void printtest();
		//Lea
		//string::string(const string& str);
		//Nathan
		//int string::length();
		//int string::max_size();
		//void resize (int n);
		//Olivia
	protected:
		
		
	
	private:
		const int taillemax = 50;
		int size_;
		int capacity_;
		char* tableau_;
	
	
};
