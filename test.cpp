
#include "string.h"
#include <stdio.h>      
#include <stdlib.h> 

int main() 
{
	string s1 ('k');
	
	//string s2 ('');
	
	printf("attendu k:" );//test constructeur
    s1.printtest();
    
    printf ("attendu 1:%d\n" ,s1.length());//test s1.length
    
    printf ("attendu 10:%d\n" ,s1.capacity());//test s1.length
    
    printf ("attendu 50:%d\n" ,s1.max_size());
    
    printf("attendu false (0) : %d\n", s1.empty());
    
    //printf("attendu true (1) : %d\n", s2.empty());
    
	char c = 'f';
	s1 = &c;
	printf("attendu f: ");
	s1.printtest();
	//printf("attendu ff (0) : %d\n", s1+s1);
    return 0;
}
