#include "Store.h"

Store::Store (std::vector<Product> _product, std::vector<Costumer> _costumer)
	: products(_product), costumer(_costumer)
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

void Store::add_costumer(Costumer& c)
{
	costumer.push_back(c); 
}

void Store::display_Customer()
{
	for (Costumer& cs : costumer)
	{
		std::cout << cs << std::endl; 
	}
}

void Store::display_Customer_name(std::string name)
{
	for (Costumer& cs : costumer)
	{
		if (cs.get_name() == name)
		{
			std::cout << cs << std::endl;
		}
		return;
	}
	std::cout << "Nom non trouvé veuillez vérifier la synthaxe";
}

void Store::display_Customer_id(int id)
{
	{
		for (Costumer& cs : costumer)
		{
			if (cs.get_id() == id)
			{
				std::cout << cs << std::endl;
			}
			return;
		}
		std::cout << "Nom non trouvé veuillez vérifier la synthaxe";
	}
}

void Store::add_product_basket(Costumer& c, Product& p)
{
	for (Costumer& cs : costumer)
	{
		if (cs.get_id() == c.get_id())
		{
			cs.add_product(p);
		}
	}
}