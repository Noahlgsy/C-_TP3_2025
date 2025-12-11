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