#pragma once
#include <iostream>
#include "Product.h"

class Category
{
	std::string name;
	bool isActive;
	Product* products;
	
	bool isExistProduct(int id); //есть ли продукт по id

public:
	Category(std::string name, bool isActive);
	void setName(std::string name);
	bool addProduct(int id, std::string name, int price);

	void deleteProductById(int id);

	void showProducts();

	~Category();
};

