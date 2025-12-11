#include "Product.h"

Product::Product(std::string _title, std::string _description, int _q, double _p)
	: title(_title), description(_description), quantity_available(_q), price(_p) 
{
}

std::string Product::get_title() const 
{ 
	return title; 
}

std::string Product::get_description() const
{
	return description;
}

int Product::get_quantity_available() const 
{ 
	return quantity_available; 
}

double Product::get_price() const 
{ 
	return price; 
}

void Product::set_title(std::string new_title) 
{ 
	title = new_title; 
}

void Product::set_description(std::string new_description) 
{ 
	description = new_description; 
}

void Product::set_quantity_available(int new_quantity_available) 
{
	quantity_available = new_quantity_available; 
}

void Product::set_price(double new_price) 
{ 
	price = new_price; 
}

std::ostream& operator<<(std::ostream& os, const Product& p)
{
	os << "Title : " << p.title << "\n" << "Description : " << p.description << "\n" << "Quantity available : " << p.quantity_available << "\n" << "Price : " << p.price << "\n"; 
	return os; 
}