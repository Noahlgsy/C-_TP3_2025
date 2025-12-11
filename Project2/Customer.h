#include "Product.h"

#pragma once

class Costumer
{
private: 
	std::string name; 
	std::string surname; 
	int id; 
	std::vector<Product> p_costumer; 

public:
	Costumer(std::string _name, std::string _surname, int _id, std::vector<Product> _p); 

	std::string get_name() const;
	std::string get_surname() const;
	int get_id() const; 
	std::vector<Product> get_product() const; 

	void add_product(Product& p);
	void erease_basket();
	void ajust_quantity_basket(Product& p, int i); 
	void erease_product(Product& p); 

	

};

std::ostream& operator<<(std::ostream& os, Costumer& c);
