#include <iostream>
#include "Store.h"

int main()
{
	//Creation of products
	Product PS5("PS5", "Une jolie console", 12, 499.99);
	Product XBOX("XBOX", "Une puissante console", 19, 499.99);
	std::vector<Product> p;
	Store s(p); 
	s.add_product(PS5); 
	s.add_product(XBOX); 
	s.display_name("PS5");



	return 0; 
}