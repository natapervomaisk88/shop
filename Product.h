#pragma once
#include <iostream>
class Product
{
	int id;
	std::string name;
	int price;
	static int countProduct;
public:
	Product()
	{
		price = 0;
		name = "";
	}
	void setPrice(int price)
	{
		this->price = price;
	}
	void setName(std::string name)
	{
		this->name = name;
	}
	void setId(int id)
	{
		this->id = id;
	}
	int getId()
	{
		return id;
	}
	int getPrice()
	{
		return price;
	}
	std::string getName()
	{
		return name;
	}
	void print()
	{
		std::cout << this->id <<" : " << this->name << " : " << this->price << std::endl;
	}
	static int getCountProduct()
	{
		return countProduct;
	}
	friend class Category;
};


