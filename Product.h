#pragma once
#include <iostream>
class Product
{
	int id;
	std::string name;
	int price;
	static int countProduct;
public:
	Product();
	void setPrice(int price);
	void setName(std::string name);
	void setId(int id);
	int getId() const;
	int getPrice() const;
	std::string getName() const;
	void print() const;
	static int getCountProduct();
	friend class Category;
};


