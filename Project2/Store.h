#include "Customer.h"

#pragma once
class Store
{
private: 
	std::vector<Product> products; 
	std::vector<Costumer> costumer;

public: 
	Store(std::vector<Product> _product, std::vector<Costumer> _costumer);

	void add_product(Product& p); 
	void display(); 
	void display_name(std::string name); 
	void update_quantity(Product& p,  std::string name);
	
	void add_costumer(Costumer& c); 
	void display_Customer(); 
	void display_Customer_name(std::string name);
	void display_Customer_id(int id);
	void add_product_basket(Costumer& c, Product& p); 
	void erease_product_basket(Costumer& c, Product& p);
	void ajust_quantity_product(Costumer& c, Product& p, int i); 


};



