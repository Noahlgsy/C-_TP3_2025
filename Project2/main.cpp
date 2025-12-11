#include <iostream>
#include "Store.h"

int main()
{
	//Creation of products
	Product PS5("PS5", "Une jolie console", 12, 499.99);
	Product XBOX("XBOX", "Une puissante console", 19, 499.99);
	Product SAXOPHONE("Saxophone", "Un beau bois", 1, 499.99);
	Product GUITARE("Guitare", "Le, meilleur instrument", 2, 200);
	
	std::vector<Product> sp; //stock Product of the store


	//Customer and Basket of the productors
	std::vector<Product> cp1; //Basket of the productors
	Costumer c1("Noah", "Luangsay", 1, cp1);
	std::vector<Product> cp2;
	Costumer c2("Violette", "Rouyer", 2, cp2);
	std::vector<Product> cp3;
	Costumer c3("Theo", "Luangsay", 3, cp3);
	
	//add of the product in the basket
	c1.add_product(GUITARE);
	c1.add_product(SAXOPHONE);
	//std::cout << c1 << std::endl;
	//tab of the costumer
	std::vector<Costumer> c; 

	//Creation of the store 
	Store s(sp, c);

	s.add_product(PS5); 
	s.add_product(XBOX); 
	s.add_costumer(c1); 
	s.add_costumer(c2);
	s.add_costumer(c3);
	s.add_product_basket(c1, PS5);
	s.display_Customer_name("Noah");
	s.erease_product_basket(c1, PS5);
	s.display_Customer_name("Noah");




	return 0; 
}