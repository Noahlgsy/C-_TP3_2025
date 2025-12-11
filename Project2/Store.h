#include "Product.h"

#pragma once
class Store
{
private: 
	std::vector<Product> products; 

public: 
	Store(std::vector<Product> _product); 

	void add_product(Product& p); 
	void display(); 
	void display_name(std::string name); 
	void update_quantity(Product& p,  std::string name);
	

};

