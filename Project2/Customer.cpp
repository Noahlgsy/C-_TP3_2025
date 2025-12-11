#include "Customer.h"

Costumer::Costumer(std::string _name, std::string _surname, int _id, std::vector<Product> _p)
	: name(_name), surname(_surname), id(_id), p_costumer(_p)
{

}

std::string Costumer::get_name() const
{
	return name; 
}
std::string Costumer::get_surname() const
{
	return surname; 
}
int Costumer::get_id() const
{
	return id; 
}
std::vector<Product> Costumer::get_product() const
{
	return p_costumer; 
}

void Costumer::add_product(Product& p)
{
	p_costumer.push_back(p); 
}

void Costumer::erease_basket()
{
	std::vector<Product> new_basket; 
	p_costumer = new_basket; 
}

void Costumer::ajust_quantity_basket(Product& p, int i)
{
	if (i < 0) i = 0; 
	for (Product& pc : p_costumer)
	{
		if (pc.get_title() == p.get_title())
		{
			pc.set_quantity_available(i); 
			return; 
		}
	}
}

void Costumer::erease_product(Product& p)
{
	for (Product& pc : p_costumer)
	{
		if (pc.get_title() == p.get_title())
		{
			pc.set_quantity_available(0);
			return;
		}
	}
}

std::ostream& operator<<(std::ostream& os, Costumer& c)
{
	os << "Name : " << c.get_name() << "\n" << "Surname : " << c.get_surname() << "\n" << "Id : " << c.get_id() << "\n" << "Basket : ";
	
	for (const auto& product : c.get_product())
	{
		os << product;
	}
	return os; 
}