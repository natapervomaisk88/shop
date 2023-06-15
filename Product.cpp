#include "Product.h"
Product::Product()
{
	price = 0;
	name = "";
}
void Product::setPrice(int price)
{
	this->price = price;
}
void Product::setName(std::string name)
{
	this->name = name;
}
void Product::setId(int id)
{
	this->id = id;
}
int Product::getId() const
{
	return id;
}
int Product::getPrice() const
{
	return price;
}
std::string Product::getName() const
{
	return name;
}
void Product::print() const
{
	std::cout << this->id << " : " << this->name << " : " << this->price << std::endl;
}
int Product::getCountProduct()
{
	return countProduct;
}
int Product::countProduct = 0;