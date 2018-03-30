class string{
	
	public:
		string(char c);
		void printtest();
	  //~string();
	  //int capacity();
	  //bool empty();
	  //void reserve(int n);
	protected:
		
		
	
	private:
		const int taillemax = 50;
		int size_;
		int capacity_;
		char* tableau_;
	
	
};
