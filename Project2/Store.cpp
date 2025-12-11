#include "Store.h"

Store::Store (std::vector<Product> _product)
	: products(_product) 
{
}

void Store::add_product(Product& p)
{
	products.push_back(p); 
}

void Store::display()
{
	for (Product& p : products)
	{
		std::cout << p << std::endl; 
	}
}

void Store::display_name(std::string name)
{
	for (Product& ps : products)
	{
		if (ps.get_title() == name)
		{
			std::cout << ps << std::endl; 
		}
		return; 
	}
	std::cout << "Nom non trouvé veuillez vérifier la synthaxe"; 
}

void Store::update_quantity(Product& p, std::string name)
{
	for (Product& ps : products)
		if (ps.get_title() == name)
		{
			ps.set_quantity_available(p.get_quantity_available());
		}
}