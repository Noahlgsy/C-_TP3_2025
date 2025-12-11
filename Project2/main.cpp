#include <iostream>
#include "Store.h"

int main()
{
	std::cout << "Hello, world !" << std::endl; 
	
	//Creation of products
	Product p1("PS5", "Une jolie console", 12, 499.99);
	Product p2("XBOX", "Une puissante console", 19, 499.99);
	std::vector<Product> p;
	Store s(p); 
	s.add_product(p1); 
	s.add_product(p2); 
	s.display(); 

	

	return 0; 
}