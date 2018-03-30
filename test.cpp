
#include "string.h"
#include <stdio.h>      
#include <stdlib.h> 

int main() 
{
	string s1 ('k');
	
	printf("attendu k:" );//test constructeur
    s1.printtest();
    
    printf ("attendu 1:%d\n" ,s1.length());//test s1.length
    
    printf ("attendu 10:%d\n" ,s1.capacity());//test s1.length
    
    printf ("attendu 50:%d\n" ,s1.max_size());
    
    
    
    return 0;
}
