#include <iostream>
#include <string>
#include <vector>

#pragma once
class Product
{ 
private: 
	std::string title; 
	std::string description; 
	int quantity_available; 
	double price; 

public: 
	Product(std::string _title, std::string _description, int _q, double _p);

	std::string get_title() const;
	std::string get_description() const;
	int get_quantity_available() const;
	double get_price() const;

	void set_title(std::string new_title);
	void set_description(std::string new_description);
	void set_quantity_available(int new_quantity_available);
	void set_price(double new_price);

	friend std::ostream& operator<<(std::ostream& os, const Product& p);

};

